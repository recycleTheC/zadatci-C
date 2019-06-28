// (c) recycleTheC - TSRB 2019.
// Učitati u polje 10 brojeva.
// Formirati novo polje od parnih elemenata prvog i ispisati ih uzlazno.

#include<stdio.h>

int main() {

	int i, j, broj[10], parni[10], temp;
	int n = 0; // brojač parnih brojeva

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);

		if (broj[i] % 2 == 0) {
			parni[n] = broj[i];
			n++;
		}
	}

	if (n != 0) {

		for (i = 0; i < n - 1; i++) {
			for (j = i + 1; j < n; j++) {
				if (parni[i] > parni[j]) {
					temp = parni[i];
					parni[i] = parni[j];
					parni[j] = temp;
				}
			}
		}

		printf("Parni brojevi: ");

		for (i = 0; i < n; i++) {
			printf("%d ", parni[i]);
		}

		printf("\n");

	}
	else {
		printf("Nisu upisani parni brojevi!\n");
	}

	return 0;
}