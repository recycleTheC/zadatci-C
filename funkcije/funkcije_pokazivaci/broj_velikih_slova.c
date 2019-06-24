// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i izbrojati koliko je upisano velikih slova pomoću funkcije i pokazivača

#include<stdio.h>
#include<string.h>

int velika(char *pokS);

int main() {

	char r[100], *pokR;
	int n;

	pokR = &r[0];

	printf("Upisi recenicu: ");
	gets(r);

	n = velika(pokR);

	printf("Broj upsianih velikih slova: %d\n", n);

	return 0;

}

int velika(char *pokS) {

	int n = 0, i, d;

	d = strlen(pokS); // Duljina rečenice

	for (i = 0; i < d; i++) {
		if (*(pokS + i) >= 'A' && *(pokS + i) <= 'Z') {
			n++; // Brojanje velikih slova
		}
	}

	return n; // Funkcija vraća broj velikih slova upisanih u rečenici

}
