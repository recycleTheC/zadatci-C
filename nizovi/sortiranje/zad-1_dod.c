// (c) recycleTheC - TSRB 2019.
// Učitati 10 brojeva u polje. Sortirati ga po parovima brojeva tako da
// na 1. mjestu u paru brojeva bude manji broj.

#include<stdio.h>

int main() {

	int i, j, broj[10], temp;

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);
	}

	for (i = 0; i < 10 - 1; i=i+2) {
		for (j = i + 1; j < i + 2; j++) {
			if (broj[i] > broj[j]) {
				temp = broj[i];
				broj[i] = broj[j];
				broj[j] = temp;
			}
		}
	}

	printf("Parovi brojeva: \n");

	for (i = 0; i < 10; i=i+2) {
		printf("%d %d\n", broj[i], broj[i + 1]);
	}

	return 0;
}