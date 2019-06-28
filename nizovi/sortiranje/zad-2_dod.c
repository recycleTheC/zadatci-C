// (c) recycleTheC - TSRB 2019.
// Učitati 5 brojeva u polje. Zatim unijeti broj i elemente polja uvećati za taj broj.
// Novo polje sortirati silazno.

#include<stdio.h>

int main() {

	int i, j, broj[5], dod, temp;

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);
	}

	printf("Upisi dodatni broj: ");
	scanf("%d", &dod);

	for (i = 0; i < 5; i++) {
		broj[i] = broj[i] + dod;
	}

	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (broj[i] < broj[j]) {
				temp = broj[i];
				broj[i] = broj[j];
				broj[j] = temp;
			}
		}
	}

	printf("Sortirani brojevi uvecani za %d: ", dod);

	for (i = 0; i < 5; i++) {
		printf("%d ", broj[i]);
	}

	printf("\n");

	return 0;
}