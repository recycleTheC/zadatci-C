// (c) recycleTheC - TSRB 2019.
// Učitati 10 realnih brojeva u niz i sortirani ih po decimalnoj znamenki stotnini od najmanjeg do najvećeg!

#include<stdio.h>

int main() {

	int i, j;
	float broj[10], st[10], temp;

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &broj[i]);
		st[i] = (int)(broj[i] * 100) % 10;
	}

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (st[i] > st[j]) {
				temp = st[i];
				st[i] = st[j];
				st[j] = temp;

				temp = broj[i];
				broj[i] = broj[j];
				broj[j] = temp;
			}
		}
	}

	printf("Sortirani brojevi: \n");

	for (i = 0; i < 10; i++) {
		printf("%f\n", broj[i]);
	}
}