// (c) recycleTheC - TSRB 2019.
// Učitati 5 cijelih brojeva iz intervala [0, 255] i upisati ih u datoteku.
// (Brojevi predstavljaju ASCII kôdove znakova.) Pročitati kôdove iz datoteke od zadnjeg
// upisanog i ispisati tablično - u prvom retku kôdovi a u drugom retku, odvojenom
// crtkanom linijom od prvog retka, znakovi kôdova iz prvog retka. Na početku svakog
// retka ispisati opis podataka u retku: na početku prvog retka "ASCII kod: ", a na
// početku retka sa zakovima "Znak: ".

#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, broj[5];
	FILE* fp;

	fp = fopen("brojevi.bin", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		do {
			printf("Upisi %d. cijeli broj iz intervala [0,255]: ", i+1);
			scanf("%d", &broj[i]);
		} while (!(broj[i] >= 0 && broj[i] <= 255));

		fwrite(&broj[i], sizeof(broj[i]), 1, fp);
	}

	fclose(fp);

	fp = fopen("brojevi.bin", "r+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fseek(fp, -i * sizeof(broj[i]), SEEK_END);
		fread(&broj[i], sizeof(broj[i]), 1, fp);
	}

	printf("ASCII kod:\t");

	for (i = 0; i < 5; i++) {
		printf("%d\t", broj[i]);
	}

	printf("\nZnak:\t\t");

	for (i = 0; i < 5; i++) {
		printf("%c\t", broj[i]);
	}

}