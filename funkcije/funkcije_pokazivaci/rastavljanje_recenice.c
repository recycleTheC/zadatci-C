// (c) recycleTheC 2019.
// Učitati rečenicu max. duljine 50 znakova. Pomoću funkcije rečenicu rastaviti u zasebna polja
// na znakove (slova), brojeve i interpunkcijske znakove.
// Ispisati rastavljene znakove u glavnom programu i duljinu upisane recenice!

#include<stdio.h>
#include<string.h>

void rastavljanjeNiza(char niz[], char *slova, char *brojevi, char *interpunkcije);

int main() {

	int i;
	char recenica[50], slovo[50], broj[50], interpunkcija[50];

	printf("Upisi recenicu (<=45 znakova): ");
	gets(recenica);

	if (strlen(recenica) > 50) {
		printf("Upisana je recenica dulja nego sto je dozvoljeno!\n");
		exit(1);
	}

	rastavljanjeNiza(recenica, &slovo, &broj, &interpunkcija); // operatorom & funkciji se šalje adresa prvog elementa polja

	// Slijedeće for petlje se izvode dok vrijednosti niza ne budu -52 -> vrijednost koja je dodijeljena praznom elementu polja

	printf("Slova u recenici: ");

	for (i = 0; slovo[i] != -52; i++) {
		printf("%c ", slovo[i]);
	}

	printf("\nBrojevi u recenici: ");

	for (i = 0; broj[i] != -52; i++) {
		printf("%c ", broj[i]);
	}

	printf("\nInterpunkcijski znakovi u recenici: ");

	for (i = 0; interpunkcija[i] != -52; i++) {
		printf("%c ", interpunkcija[i]);
	}

	printf("\nDuljina upisane recenice: %d znakova\n", strlen(recenica));

	return 0;

}

void rastavljanjeNiza(char niz[], char *slova, char *brojevi, char *interpunkcije) {

	int i, nSlovo=0, nBroj=0, nInterpunkcije=0;

	for (i = 0; i < (strlen(niz)); i++) {
		if (niz[i] >= '0' && niz[i] <= '9') {
			*(brojevi + nBroj) = niz[i];
			nBroj++;
		}
		if (niz[i] >= '!' && niz[i] <= '/') {
			*(interpunkcije + nInterpunkcije) = niz[i];
			nInterpunkcije++;
		}
		if (niz[i] >= 'a' && niz[i] <= 'z' || niz[i] >= 'A' && niz[i] <= 'Z') {
			*(slova + nSlovo) = niz[i];
			nSlovo++;
		}
	}
}