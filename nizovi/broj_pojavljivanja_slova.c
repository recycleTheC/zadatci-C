// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i još jedno slovo.
// Ispitati pojavljuje li se upisano slovo u prvoj riječi koja počinje na 'a' i koliko puta.

#include<stdio.h>

int main() {

	int i, d, n=-1; // n ima vrijednost -1 za provjeru postoji li u recenici rijec koja pocinje slovom 'a'
	char r[255], slovo;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi jos jedno slovo: ");
	scanf(" %c", &slovo);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		if (r[i] == 'a' && r[i - 1] == ' ') {
			n = 0; // u recenici postoji rijec koja pocinje slovom 'a', brojac se postavlja u 0
			for (i; r[i] != ' ' && i < d; i++) {
				if (r[i] == slovo) {
					n++;
				}
			}
		}
	}

	if (n == -1) { // ako u recenici nema rijeci koja pocinje slovom 'a', n ima vrijednost -1
		printf("U recenici nema rijeci koja pocinje slovom 'a'.\n");
	}
	else {
		printf("Slovo %c se ", slovo);

		if (n == 0) {
			printf("ne ");
		}
		else {
			printf("%d puta ", n);
		}

		printf("pojavljuje u prvoj rijeci koja pocinje slovom 'a'.\n");
	}
	return 0;
}