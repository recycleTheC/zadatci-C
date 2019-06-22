// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i nakon toga traženo slovo.
// Ispitati pojavljuje li se slovo u n-toj riječi rečenice i ako da, koliko puta.

#include<stdio.h>

int main() {

	int i, d, n = 0, poz, raz=0;
	char r[255], s;

	printf("Upisi recenicu: ");
	gets(r);

	printf("Upisi slovo kojim se pretrazuje rijec: ");
	scanf(" %c", &s);

	printf("Upisi redni broj rijeci koja ce biti pretrazena: ");
	scanf("%d", &poz);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		if (r[i] == ' ' || i == 0) {
			raz++;
		}
		if (raz == poz) {
			for (i; i < d && r[i + 1] != ' '; i++) {
				if (r[i] == s) {
					n++;
				}
			}
			break;
		}
	}

	if (poz > raz) {
		printf("U recenici nema %d. rijeci!\n", poz);
	}
	else {
		printf("Slovo '%c' se ", s);

		if (n == 0) {
			printf("ne pojavljuje ");
		}
		else {
			printf("pojavljuje %d puta ", n);
		}

		printf("u %d. rijeci recenice!\n", poz);
	}

	return 0;
}