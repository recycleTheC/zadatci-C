// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i ispisati sve riječi koje počinju slovom a
// bez korištenja funkcija.

#include<stdio.h>
#include<string.h>

int main() {

	int i, d;
	char r[255];

	printf("Upisi recenicu: ");
	gets(r);

	d = strlen(r);

	printf("Rijeci koje pocinju slovom a:\n");

	for (i = 0; i < d; i++) {
		if ((r[i] == 'a' || r[i] == 'A') && (r[i - 1] == ' ' || i == 0)) {
			for (i; r[i] != ' ' && i < d; i++) {
				printf("%c", r[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
