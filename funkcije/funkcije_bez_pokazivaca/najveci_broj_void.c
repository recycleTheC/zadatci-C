// (c) recycleTheC - TSRB 2019.
// (c) Mojwebdizajn.net 2012-2019
// Učitati tri broja. U funkciji pronaći i ispisati najveći od ta tri broja!

#include <stdio.h>

void maksimum(int x, int y, int z); // Deklaracija funkcije

int main() {

	int a, b, c;

	printf("Upisi tri broja: ");
	scanf("%d %d %d", &a, &b, &c);

	maksimum(a,b,c); // Pozivanje funkcije

	return 0;
}

void maksimum(int x, int y, int z) { // Definicija funkcije

	int max;

	max = x; // postavlja se da je prvi učitani broj najveći

	if (y > max) { // ispistuje se je li drugi učitani broj veći od max
		max = y;
	}
	if (z > max) { // ispistuje se je li treči učitani broj veći od max
		max = z;
	}

	printf("Najveci upisani broj je %d\n", max); // Funkcija ne vraća rezultat već ga ispisuje

	return;
}