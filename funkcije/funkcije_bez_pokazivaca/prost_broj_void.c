// (c) recycleTheC - TSRB 2019.
// Učitati broji u funkciji provjeriti je li prost.

#include <stdio.h>

void prostbroj(int x);

int main() {

	int a;

	printf("Upisi broj: ");
	scanf("%d", &a);

	prostbroj(a);

	return 0;
}

void prostbroj(int x) {

	int i = x - 1; // Broj za 1 manji od učitanog broja koji će se u funckiji koristiti kao djelitelj

	while (x % i != 0) { // Dok se učitani broj ne može cjelobrojno podijeliti sa i, djelitelj (i) se smanjuje
		i--;
	}

	if (i == 1) {
		printf("Broj je prost\n");
	}
	else {
		printf("Broj nije prost\n");
	}

	return;
}