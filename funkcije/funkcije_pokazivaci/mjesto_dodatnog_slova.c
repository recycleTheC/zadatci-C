// (c) recycleTheC - TSRB 2019.
// Učitati rečencu i još jedno slovo.
// U funkciji ispisati na kojem se mjestu/mjestima pojavljuje dodatno slovo.

#include<stdio.h>
#include<string.h>

void mjestoSlova(char *x, char s);

int main() {

	char r[255], *pokR = &r[0], s;

	printf("Upisi recenicu: ");
	gets(pokR);

	printf("Upisi dodatno slovo: ");
	scanf(" %c", &s);

	mjestoSlova(pokR, s);

	return 0;
}

void mjestoSlova(char *x, char s) {

	int n = -1; // Početna vrijednost brojača je -1
	int i, d;

	d = strlen(x);

	for (i = 0; i < d; i++) {
		if (*(x + i) == s) {
			n = 1; // Ako u rečenici postoji traženo slovo, brojač se postavlja u 1
			break; // Prekida se for petlja
		}
	}

	printf("Slovo %c se ", s);

	if (n == -1) {
		printf("ne pojavljuje u recenici!\n", s);
	}
	else {

		printf("pojavljuje na poziciji: ");

		for (i; i < d; i++) { // početna vrijednost varijable i ostaje ista -> pokazivač je na poziciji učitanog slova u nizu
			if (*(x + i) == s) {
				printf("%d ", i+1);
			}
		}
		printf("\n");
	}
}