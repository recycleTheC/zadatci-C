// (c) recycleTheC - TSRB 2019.
// Učitati ukupno 5 cijelih i realnih brojeva u datoteku.
// Korisnika tražiti upis broja iz intervala [0,4].
// Nakon toga pročitati broj iz datoteke čiji je redni broj jednak učitanom broju.
// Ispisati taj broj i ispisati je li realan ili cijeli broj.

#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, sel;
	float broj;
	FILE* fp;

	fp = fopen("brojevi.bin", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &broj);
		fwrite(&broj, sizeof(broj), 1, fp);
	}

	printf("Upisi broj iz intervala [0,4]: ");
	scanf("%d", &sel);

	while (!(sel >= 0 && sel <= 4)) {
		printf("Ponovno upisi broj iz intervala [0,4]: ");
		scanf("%d", &sel);
	}

	fseek(fp, sizeof(broj) * sel, SEEK_SET);
	fread(&broj, sizeof(broj), 1, fp);

	printf("Broj na %d. mjestu: %f", sel, broj);

	if (broj == (int)broj) {
		printf(", cijeli\n");
	}
	else {
		printf(", realni\n");
	}

	fclose(fp);

	return 0;
}