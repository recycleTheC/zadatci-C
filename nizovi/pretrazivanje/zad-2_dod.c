// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i nakon toga znak koji se traži u rečenici.
// Ispisati u kojoj se riječi učitan znak pojavljuje prvi puta.

#include<stdio.h>

int main() {

	int i, d, n = 0, r=0;
	char recenica[255], sel;

	printf("Upisi recenicu: ");
	gets(recenica);

	printf("Upisi znak za pretragu: ");
	scanf(" %c", &sel);

	d = strlen(recenica);

	for (i = 0; i < d; i++) {
		if (recenica[i] == sel) {
			n = i + 1;
			break;
		}
	}

	printf("Znak '%c' se ", sel);

	if (n != 0) {
		printf("prvi puta pojavljuje na %d. mjestu!\n", n);
	}
	else {
		printf("ne pojavljuje u recenici!\n");
	}

	return 0;
}