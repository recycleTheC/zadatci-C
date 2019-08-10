// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i od prvih slova riječi u rečenici napraviti novu riječ.

#include<stdio.h>
#include<string.h>

int main() {

	int i, d, j;
	char r[255], ispis[255] = "";

	printf("Upisi recenicu: ");
	gets(r);

	d = strlen(r);
	j = 0;

	for (i = 0; i < d; i++) {

		if (r[i - 1] == ' ' || i == 0) {
			ispis[j] = r[i];
			j++;
		}
	}

	printf("Nova rijec kreirana od prvih slova upisane recenice: %s\n", ispis);

	return 0;
}