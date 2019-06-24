// (c) recycleTheC - TSRB 2019.
// (c) Mojwebdizajn.net 2012-2019
// Učitati tri broja. U funkciji pronaći od najveći broj!

#include <stdio.h>

int maksimum(int x, int y, int z);

int main() {

	int a, b, c, m;

	printf("Upisi tri broja: ");
	scanf("%d %d %d", &a, &b, &c);

	m=maksimum(a, b, c); // Pozivanje funckije i spremanje rezultata

    printf("Najveci upisani broj je %d\n", m);

	return 0;
}

int maksimum(int x, int y, int z) { // Definicija funkcije

	int max;

	max = x; // postavlja se da je prvi učitani broj najveći

	if (y > max) { // ispistuje se je li drugi učitani broj veći od max
		max = y;
	}
	if (z > max) { // ispistuje se je li treči učitani broj veći od max
		max = z;
	}

	return max; // funkcija vraća vrijednost najvećeg učitanog broja

}