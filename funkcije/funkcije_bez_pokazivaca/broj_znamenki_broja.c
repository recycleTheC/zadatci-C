// (c) recycleTheC - TSRB 2019.
// Učitati n brojeva i u funkciji izračunati broj znamenki učitanog broja.

#include<stdio.h>

int znamenke(int x);

int main() {

	int i, broj, n, nZ;

	printf("Upisi broj upisa: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj);
		nZ = znamenke(broj);

		printf("Broj ima %d znamenki\n", nZ);
	}

	return 0;
}

int znamenke(int x) {

	int n = 0; // broj znamenki broja

	do {
		n++; // broj znamenki se povećava za 1
		x = x / 10; // broj se dijeli sa 10
	} while (x != 0); // naredbe se izvršavanju dok broj nije 0

	return n; // funkcija vraća broj znamenki
}