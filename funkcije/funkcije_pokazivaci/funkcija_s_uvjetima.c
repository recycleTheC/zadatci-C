// (c) recycleTheC - TSRB 2019.
// Učitati ukupno 10 cijelih i realnih brojeva u polje.
// Nakon toga učitati još jedan cijeli broj (x). U funkciji
// uvećati broj iz polja za 2x ako je x veći od 10, umanjiti
// ga za x ako je x manji od 6 ili broj iz polja pomnožiti sa x.
// Uvećane brojeve spremiti u zasebno polje i ispisati ga u glavom programu!

#include<stdio.h>

void funkcija(float *polje, int dodatni, float *rezultat);

int main() {

	int i, dod;
	float broj[10], rez[10];
	float *pokBr = &broj[0], *pokRez = &rez[0];

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", (pokBr + i));
	}

	printf("Upisi dodatni cijeli broj: ");
	scanf("%d", &dod);

	funkcija(pokBr, dod, pokRez);

	printf("Rezultat funkcije:\n");

	for (i = 0; i < 10; i++) {
		printf("%f\t%f\n", *(pokBr + i), *(pokRez + i));
	}

	return 0;
}

void funkcija(float *polje, int dodatni, float *rezultat) {

	int i;

	for (i = 0; i < 10; i++) {
		if (dodatni > 10) {
			*(rezultat + i) = *(polje + i) + 2 * dodatni;
		}
		else if (dodatni < 6) {
			*(rezultat + i) = *(polje + i) - dodatni;
		}
		else {
			*(rezultat + i) = *(polje + i) * dodatni;
		}
	}
	return;
}