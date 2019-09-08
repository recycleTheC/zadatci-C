// (c) recycleTheC - TSRB 2019.
// Učitati 5 brojeva i upisati ih u datoteku.
// Pročitati brojeve iz datoteke i u datoteku upisati je li učitani broj paran ili neparan.
// Rezultate upisati u datoteku u obliku: 
// "2 paran"
// "7 neparan"

#include<stdio.h>
#include<stdlib.h>

int main() {

	int brojevi[5], i;
	FILE* fp;

	fp = fopen("brojevi.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &brojevi[i]);
		fprintf(fp, "%d\n", brojevi[i]);
	}

	fclose(fp);

	fp = fopen("brojevi.txt", "r");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fscanf(fp, "%d\n", &brojevi[i]);
	}

	fclose(fp);

	fp = fopen("rezultat.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fprintf(fp, "%d ", brojevi[i]);
		if (brojevi[i] % 2 == 0) {
			fprintf(fp, "paran\n");
		}
		else {
			fprintf(fp, "neparan\n");
		}
	}

	fclose(fp);

	return 0;
}