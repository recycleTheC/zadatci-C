// (c) recycleTheC - TSRB 2019.
// Učitati 5 slova i upisati ih u datoteku. Pročitati slova iz
// datoteke i svako malo slovo zamijeniti velikim i obratno.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	FILE *fp;  // Pokazivač tipa FILE na datoteku
	int i;
	char slovo[5];	

	fp = fopen("Slova.txt", "w"); // Otvaranje datoteke za pisanje

	if (fp == NULL) { // Ako dođe do pogreške pri otvaranju datoteke, pokazivač je postavljen u NULL vrijednost
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. slovo: ", i + 1);
		scanf(" %c", &slovo[i]);
		fprintf(fp, "%c\n", slovo[i]); // Upisivanje slova u datoteku
	}

	fclose(fp); // Zatvaranje datoteke

	fp = fopen("Slova.txt", "r"); // Otvaranje datoteke za čitanje

	if (fp == NULL) { // Ako dođe do pogreške pri otvaranju datoteke, pokazivač je postavljen u NULL vrijednost
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	printf("Slova nakon zamjene: \n");

	for (i = 0; i < 5; i++) {
		fscanf(fp, "%c\n", &slovo[i]);

		if (slovo[i] >= 'A' && slovo[i] <= 'Z') {
			slovo[i] = slovo[i] + 32;
		}
		else {
			slovo[i] = slovo[i] - 32;
		}
		printf("%c\n", slovo[i]);
	}

	fclose(fp); // Zatvaranje datoteke

	fp = fopen("Slova.txt", "w"); // Otvaranje datoteke za pisanje

	if (fp == NULL) { // Ako dođe do pogreške pri otvaranju datoteke, pokazivač je postavljen u NULL vrijednost
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fprintf(fp, "%c\n", slovo[i]); // upisivanje zamijenjenih slova u datoteku
	}

	fclose(fp); // Zatvaranje datoteke

	return 0;
}