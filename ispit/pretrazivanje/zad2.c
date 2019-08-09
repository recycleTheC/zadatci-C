// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i još jedno slovo.
// Ispisati sve riječi koje završavaju na to slovo!

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, n = 0, lok;
	char r[255], sel;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi slovo za sortiranje: ");
	scanf(" %c", &sel);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		if (r[i] == sel && r[i + 1] == ' ' || r[i+1] == '\0') {
			n++;
			break;
		}
	}

	if (n == 0) {
		printf("U recenici ne postoje rijeci koje zavrsavaju na slovo '%c'\n", sel);
	}
	else {

		printf("Rijeci koje zavrsavaju na slovo '%c': ", sel);

		for (i = 0; i < d; i++) {
			if (r[i - 1] == ' ' || i == 0) {
				lok = i;
			}
			if (r[i] == sel && (r[i + 1] == ' ' || r[i + 1] == '\0')) {
				for (i = lok; i < d && r[i] != ' '; i++) {
					printf("%c", r[i]);
				}
				printf(" ");
			}
		}
		printf("\n");
	}
}