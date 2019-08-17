// (c) recycleTheC - TSRB 2019.
// Učitati 5 brojeva i u funkciji ispitati koji broj je najveći.

#include<stdio.h>

int najveciBroj(int* pokX);

int main() {

	int i, broj[5], *pokBr = &broj[0], max;

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", (pokBr + i));
	}

	max = najveciBroj(pokBr);

	printf("Najveci broj iz niza: %d\n", max);

	return 0;

}

int najveciBroj(int* pokX) {

	int max, i;

	max = *pokX; // Prvi broj iz niza postavlja se kao najveći

	for (i = 1; i < 5; i++) {
		if (*(pokX + i) > max) { // Usporedba sljedećih brojeva iz niza
			max = *(pokX + i);
		}
	}

	return max;
}