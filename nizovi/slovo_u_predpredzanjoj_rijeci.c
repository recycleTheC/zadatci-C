// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i jedno slovo.
// Ispitati pojavljuje li se upisano slovo u pred predzadnjoj rijeci recenice.

#include<stdio.h>

int main() {

	int i, d, n = 0, raz=0;
	char r[255], s;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi dodatno slovo: ");
	scanf(" %c", &s);

	d = strlen(r);

	for (i = d; i >= 0; i--) {
		if (r[i] == ' ') {
			raz++;
		}
		if (raz == 2) {
			for (i = i + 1; i < d && r[i] != ' '; i++) {
				if (r[i] == s) {
					n++;
					break; // nije potrebno ispitati koliko se puta rijec pojavljuje u recenici
				}
			}
			break; // obavezno prekidanje for petlje nakon što je ispitano pojavljuje li se slovo u rijeci
		}
	}

	printf("Slovo %c se ", s);

	if (n == 0) {
		printf("ne ");
	}
	
	printf("pojavljuje u recenici!\n");

	return 0;
}