// (c) recycleTheC - TSRB 2019.
// Upisati rečenicu i nakon toga znak koji se traži u rečenici.
// Ispisati riječ u kojoj se traženi znak pojavljuje prvi puta.

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, temp, n = 0;
	char recenica[255], sel;

	printf("Upisi recenicu: ");
	gets(recenica);

	printf("Upisi znak za pretragu: ");
	scanf(" %c", &sel);

	d = strlen(recenica);
	
	for (i = 0; i < d; i++) {
		if (recenica[i - 1] == ' ' || i == 0) {
			temp = i; // lokacija početnog slova riječi
		}

		if (recenica[i] == sel) { // ako je recenica[i] jednako upisanom znaku

			printf("Rijec u kojoj se prvi put pojavljuje znak '%c': ", sel);

			for (i = temp; i < d && recenica[i] != ' '; i++) { // i se postavlja u lokaciju početnog slova riječi; petlja se ponavlja dok je i<d i recenica[i] nije razmak; i++
				printf("%c", recenica[i]); // ispis riječi u kojoj se pojavljuje znak
			}

			printf("\n");

			n++; // brojač se povećava za 1
			break; // prekida se for petlja
		}
	}

	if (n == 0) { // brojač je 0, znak se ne pojavljuje u rečenici
		printf("Znak '%c' se ne pojavljuje u recenici!\n", sel);
	}

	return 0;
}