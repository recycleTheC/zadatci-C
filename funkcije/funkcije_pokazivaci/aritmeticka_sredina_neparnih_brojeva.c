// (c) recycleTheC - TSRB 2019.
// Učitati 10 brojeva i nakon toga izračunati aritmaticku sredinu neparnih brojeva koristeči funkciju i pokazivaće

#include<stdio.h>

float arsr(int *pokBr);

int main() {

	int broj[100], i, *pokBr;
	float sredina;

	pokBr = &broj[0];

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", (pokBr + i));
	}

	sredina = arsr(pokBr);

	if (sredina == -1) {
		printf("Nisu upisani neparni brojevi\n");
	}
	else {
		printf("Aritmeticka sredina neparnih brojeva: %f\n", sredina);
	}
	return 0;
}

float arsr(int *pokBr) {

	int zbr = 0, i, n=0;
	float sredina;

	for (i = 0; i < 10; i++) {
		if ((*pokBr + i) % 2 != 0) {
			zbr = zbr + *(pokBr + i);
			n++;
		}
	}

	if (n != 0) {
		sredina = (float)zbr / n;
		return sredina; // Funkcija vraća vrijednost aritmetičke sredine neparnih brojeva
	}
	else {
		return -1; // Funckija vraća vrijednost -1 ako nisu upisani neparni brojevi
	}
}
