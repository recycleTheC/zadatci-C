// (c) recycleTheC - TSRB 2019.
// Učitati broji u funkciji provjeriti je li prost.

#include <stdio.h>

int prostbroj(int x);

int main() {

	int a, rez;

	printf("Upisi broj: ");
	scanf("%d", &a);

	rez=prostbroj(a);

    if (rez == 1) {
		printf("Broj je prost\n");
	}
	if (rez == 0) {
		printf("Broj nije prost\n");
	}

	return 0;
}

int prostbroj(int x) {

	int i = x - 1; // Broj za 1 manji od učitanog broja koji će se u funckiji koristiti kao djelitelj


	while (x % i != 0) { // Dok se učitani broj ne može cjelobrojno podijeliti sa i, djelitelj (i) se smanjuje
		i--;
	}

	if (i == 1) {
		return 1; // broj je prost
	}
	else {
		return 0; // broj nije prost
	}
}