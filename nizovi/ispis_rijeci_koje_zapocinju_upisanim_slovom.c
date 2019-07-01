// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i jedno slovo.
// Ispitati sve riječi koje započinju ovim slovom.

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, st = 0;
	char r[255], s;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi dodatno slovo: ");
	scanf(" %c", &s);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		if (r[i] == s && r[i - 1] == ' ') { // ispitivanje postoji li rijec koja pocinje na upisano slovo
			st++;
			break;
		}
	}

	if (st == 0) {
		printf("U recenici ne postoje rijeci koje zapocinju na slovo '%c'\n", s);
	}
	else {
		printf("Rijeci u recenici koja zapocinju slovom '%c':\n", s);

		for (i = 0; i < d; i++) {
			if (r[i] == s && r[i - 1] == ' ') {
				for (i; i < d && r[i] != ' ';i++) {
					printf("%c", r[i]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}