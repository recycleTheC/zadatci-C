// (c) recycleTheC - TSRB 2019.
// Upisati riječ i nakon toga znak koji se traži u riječi.
// Ispisati na kojem se mjestu znak pojavljuje prvi puta.

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, n = 0;
	char rijec[255], sel;

	printf("Upisi rijec: ");
	scanf("%s", rijec);

	printf("Upisi slovo za pretragu: ");
	scanf(" %c", &sel);


	d = strlen(rijec);

	for (i = 0; i < d; i++) {
		if (rijec[i] == sel) {
			n = i + 1; // Ako u rečenici postoji traženo slovo, brojač se postavlja u vrijednost varijable i uvećane za 1
			break; // Prekida se for petlja
		}
	}

	printf("Slovo '%c' se ", sel);

	if (n == -0) {
		printf("ne pojavljuje u recenici!\n");
	}
	else {
		printf("prvi puta pojavljuje na mjestu %d!\n", n);
	}
}