// (c) recycleTheC - TSRB 2019.
// Učitati 3 broja i u funkciji ispisati broj sa najmanjim brojem znamenki.

#include<stdio.h>

void najmanjeZnamenki(int x, int y, int z);

int main() {

	int a, b, c;

	printf("Upisi 1. broj: ");
	scanf("%d", &a);
	printf("Upisi 2. broj: ");
	scanf("%d", &b);
	printf("Upisi 3. broj: ");
	scanf("%d", &c);

	najmanjeZnamenki(a, b, c);

	return 0;
}
void najmanjeZnamenki(int x, int y, int z) {

	int n; // varijabla koja će se koristiti kao privremeno spremište učitanih brojeva
	int br1 = 0, br2 = 0, br3 = 0; // varijable za spremanje broja znamenki učitanih brojeva
	int min = 0; // varijabla za spremanje broja s najmanjim brojem znamenki

	n = x;

	while (n > 0) {
		n = n / 10;
		br1++;
	}

	n = y;

	while (n > 0) {
		n = n / 10;
		br2++;
	}

	n = z;

	while (n > 0) {
		n = n / 10;
		br3++;
	}

	if (br1 < br2 && br1 < br3) {
		min = x;
	}
	if (br2 < br1 && br2 < br3) {
		min = y;
	}
	if (br3 < br1 && br3 < br2) {
		min = z;
	}

	if (min == 0) { // min je na početku funkcije 0, ako su brojevi jednakog broja znamenki, min se ne mijenja
		printf("Upisani su brojevi s jednakim brojem znamenaka!\n");
	}
	else {
		printf("Broj s najmanjim brojem znamenki: %d\n", min);
	}
}