// (c) recycleTheC - TSRB 2019.
// Učitati 5 brojeva i u funkciji ispisati aritmetičku sredinu parnih brojeva.

#include<stdio.h>

void parni(int* pokBr);

int main() {

	int i, broj[5], * pokBr = &broj[0];

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", (pokBr + i));
	}

	parni(pokBr);

	return 0;
}

void parni(int* pokBr) {

	int zbr = 0, n = 0, i;
	float arsr;

	for (i = 0; i < 5; i++) {
		if (*(pokBr + i) % 2 == 0) {
			zbr = zbr + *(pokBr + i);
			n++;
		}
	}

	if (n == 0) {
		printf("Nisu upisani parni brojevi\n");
	}
	else {
		arsr = (float)zbr / n;
		printf("Aritmeticka sredina parnih brojeva: %f\n", arsr);
	}
}