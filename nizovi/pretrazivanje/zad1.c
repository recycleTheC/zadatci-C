// (c) recycleTheC - TSRB 2019.
// Upisati 10 znakova u polje i nakon toga znak koji se traži u polju.
// Ispitati pojavljuje li se znak u polju i koliko puta.

#include<stdio.h>

int main() {

	int i, n = 0;
	char znak[10], sel;

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. znak: ", i + 1);
		scanf(" %c", &znak[i]);
	}

	printf("Upisi znak za pretragu: ");
	scanf(" %c", &sel);

	for (i = 0; i < 10; i++) {
		if (znak[i] == sel) {
			n++;
		}
	}

	printf("Znak '%c' se u nizu ", sel);

	if (n != 0) {
		 printf("pojavljuje %d puta!\n", n);
	}
	else {
		printf("ne pojavljuje!\n");
	}

	return 0;
}