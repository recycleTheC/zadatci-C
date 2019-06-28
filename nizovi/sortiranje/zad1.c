// (c) recycleTheC - TSRB 2019.
// Učitati 7 cijelih brojeva u polje i sortirati ih silazno.

#include<stdio.h>

int main() {

	int i, j, broj[7], temp;

	for (i = 0; i < 7; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);
	}

	for (i = 0; i < 7 - 1; i++) {
		for (j = i + 1; j < 7; j++) {
			if (broj[i] < broj[j]) {
				temp = broj[i];
				broj[i] = broj[j];
				broj[j] = temp;
			}
		}
	}

	printf("Sortirani brojevi: ");

	for (i = 0; i < 7; i++) {
		printf("%d ", broj[i]);
	}

	printf("\n");

	return 0;
}