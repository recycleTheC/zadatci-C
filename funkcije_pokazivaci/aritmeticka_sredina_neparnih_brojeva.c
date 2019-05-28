// (c) recycleTheC - TSRB 2019.
//* Učitati 10 brojeva i nakon toga izračunati aritmaticku sredinu neparnih brojeva koristeči funkciju i pokazivaće*/

#include<stdio.h>

float arsr(int *pokBr);

int main() {

	int broj[100], i, *pokBr;
	float sredina;

	pokBr = &broj[0];

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", pokBr + i);
	}

	pokBr = &broj[0];

	sredina = arsr(pokBr);

	if (sredina == -1) {
		printf("Nisu upisani neparni brojevi\n");
		printf("Aritmeticka sredina neparnih brojeva: %f\n", sredina);
	}
	else {
		printf("Aritmeticka sredina neparnih brojeva: %f\n", sredina);
	}
	return 0;
}

float arsr(int *pokBr) {

	int zbr = 0, i, n=0; float sredina;

	for (i = 0; i < 10; i++) {
		if ((*pokBr + i) % 2 != 0) {
			zbr = zbr + (*pokBr + i);
			n++;
		}
	}

	if (n != 0) {
		sredina = (float)zbr / n;
		return sredina;
	}
	else {
		return -1;
	}
}
