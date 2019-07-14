// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i još jedno slovo.
// Ispisati sve riječi koje sadrže to slovo!

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, n=0, lok;
	char r[255], sel;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi slovo za sortiranje: ");
	scanf(" %c", &sel);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		if (r[i] == sel) {
			n++;
			break;
		}
	}

	if (n == 0) {
		printf("U recenici ne postoje rijeci koje sadrze slovo '%c'\n", sel);
	}
	else {

		printf("Rijeci koje sadrze slovo '%c': ", sel);

		for (i = 0; i < d; i++) {
			if (r[i - 1] == ' ' || i == 0) {
				lok = i;
			}
			if (r[i] == sel) {
				for (i = lok; i < d && r[i] != ' '; i++) {
					printf("%c", r[i]);
				}
				printf(" ");
			}
		}

		printf("\n");
	}
}