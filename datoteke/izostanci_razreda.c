// (c) recycleTheC - TSRB 2019.
// Upisati u datoteku izostanke za 4 treća razreda jedne škole. Pročitati podatke iz
// datoteke te izračunati i ispisati ukupan broj izostanaka, prosječan broj izostanaka te
// ispisati razrede sa izostancima manjim od prosjeka!

#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE* fp;  // Pokazivač tipa FILE na datoteku
	int i;
	int izostanci[4], zbr=0;
	float prosjekIzostanaka;

	fp = fopen("Izostanci.txt", "w"); // Otvaranje datoteke za pisanje

	if (fp == NULL) { // Ako dođe do pogreške pri otvaranju datoteke, pokazivač je postavljen u NULL vrijednost
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 4; i++) {
		printf("Upisi broj izostanaka za %d. treci razred: ", i + 1);
		scanf("%d", &izostanci[i]);
		fprintf(fp, "%d\n", izostanci[i]); // Upisivanje broja izostanaka u datoteku
	}

	fclose(fp); // Zatvaranje datoteke

	fp = fopen("Izostanci.txt", "r"); // Otvaranje datoteke za čitanje

	if (fp == NULL) { // Ako dođe do pogreške pri otvaranju datoteke, pokazivač je postavljen u NULL vrijednost
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 4; i++) {
		fscanf(fp, "%d\n", &izostanci[i]); // Čitanje broja izostanaka iz datoteke
		zbr = zbr + izostanci[i];
	}

	fclose(fp); // Zatvaranje datoteke

	prosjekIzostanaka = (float)zbr / 4;

	printf("\nUkupan broj izostanaka: %d\n", zbr);
	printf("Prosjecan broj izostanaka: %.2f\n\n", prosjekIzostanaka);

	printf("Razredi s brojem izostanaka manjim od prosjeka: \n");

	for (i = 0; i < 4; i++) {
		if (izostanci[i] < prosjekIzostanaka) {
			printf("%d. treci razred, %d izostanaka\n", i + 1, izostanci[i]);
		}
	}

	return 0;
}