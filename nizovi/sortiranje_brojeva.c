// (c) recycleTheC - TSRB 2019.
// Učitati 5 brojeva, sortirati ih kao cijele i realne brojeve u zasebna polja i sortirati brojeve u
// poljima od najmanjeg do najvećeg.

#include<stdio.h>

int main() {

	int i, j, m = 0, k = 0, cijeli[5], tempC;
	float broj[5], realni[5], tempF;

	for (i = 0; i < 5; i++) {
		printf("Upisite %d. broj: ", i + 1);
		scanf("%f", &broj[i]);

		if (broj[i] == (int)broj[i]) {
			cijeli[m] = broj[i];
			m++;
		}
		else {
			realni[k] = broj[i];
			k++;
		}
	}

	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {
			if (realni[i] > realni[j]) {
				tempF = realni[i];
				realni[i] = realni[j];
				realni[j] = tempF;
			}
		}
	}
	for (i = 0; i < m - 1; i++) {
		for (j = i + 1; j < m; j++) {
			if (cijeli[i] > cijeli[j]) {
				tempC = cijeli[i];
				cijeli[i] = cijeli[j];
				cijeli[j] = tempC;
			}
		}
	}

	if (m != 0) {

		printf("Cijeli brojevi: ");

		for (i = 0; i < m; i++) {
			printf("%d ", cijeli[i]);
		}

		printf("\n");
	}

	if (k != 0) {
		printf("Realni brojevi: ");

		for (i = 0; i < k; i++) {
			printf("%.2f ", realni[i]);
		}

		printf("\n");
	}

	return 0;
}