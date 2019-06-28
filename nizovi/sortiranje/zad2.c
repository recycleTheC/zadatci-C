// (c) recycleTheC - TSRB 2019.
// Učitati 6 brojeva u polje. Prva tri broja sortirati uzlazno, a zadnja tri silazno.

#include<stdio.h>

int main() {

	int i, j, broj[6], temp;

	for (i = 0; i < 6; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);
	}

	for (i = 0; i < 6-1; i++) {
		if (i < 3) {
			for (j = i + 1; j < 3; j++) {
				if (broj[i] > broj[j]) {
					temp = broj[i];
					broj[i] = broj[j];
					broj[j] = temp;
				}
			}
		}
		else {
			for (j=i+1; j < 6; j++) {
				if (broj[i] < broj[j]) {
					temp = broj[i];
					broj[i] = broj[j];
					broj[j] = temp;
				}
			}
		}
	}

	printf("Sortirani brojevi: ");

	for (i = 0; i < 6; i++) {
		printf("%d ", broj[i]);
	}

	printf("\n");

	return 0;
}