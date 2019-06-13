// (c) recycleTheC - TSRB 2019.
// Učitati broj i ispisati njegov binarni zapis.,

#include <stdio.h>

int main() {

	int broj, i, nbits, mask;

	nbits = 8 * sizeof(int); /* duljina tipa int */
	mask = 1 << 31; /* 1 na najznacajnijem mjestu*/

	printf("Upisi broj: ");
	scanf("%d", &broj);

	printf("Binarni zapis broja: ");

	for (i = 1; i <= nbits; i++) {
		if (broj & mask) {
			printf("1");
		}
		else {
			printf("0");
		}
		if (i % 4 == 0) printf(" "); // grupiranje bitova u bajtove
		broj = broj << 1;
	}

	printf("\n");
	return 0;

}