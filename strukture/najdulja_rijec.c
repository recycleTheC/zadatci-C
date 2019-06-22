// (c) recycleTheC - TSRB 2019.
// Učitati četiri riječi i ispisati riječ s najvećim brojem slova.

#include<stdio.h>
#include<string.h>

struct rijeci {
	char rijec[255];
	int d;
};

int main() {

	int i;
	struct rijeci r[4], max;

	for (i = 0; i < 4; i++) {
		printf("Upisi %d. rijec: ", i + 1);
		gets(r[i].rijec);
		r[i].d = strlen(r[i].rijec);
	}

	max = r[0];

	for (i = 1; i < 4; i++) {
		if (r[i].d > max.d) {
			max = r[i];
		}
	}

	printf("Rijec s najvecim brojem znakova: %s\n", max.rijec);

	return 0;
}