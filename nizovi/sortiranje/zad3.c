// (c) recycleTheC - TSRB 2019.
// Učitati 10 slova i sortirati ih po abecedi.

#include<stdio.h>

int main() {

	int i, j;
	char slovo[10], temp;

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. slovo: ", i + 1);
		scanf(" %c", &slovo[i]);
	}

	for (i = 0; i < 10 - 1; i++) {
		for (j = i + 1; j < 10; j++) {
			if (slovo[i] > slovo[j]) {
				temp = slovo[i];
				slovo[i] = slovo[j];
				slovo[j] = temp;
			}
		}
	}

	printf("Sortirana slova: ");

	for (i = 0; i < 10; i++) {
		printf("%c ", slovo[i]);
	}

	printf("\n");

	return 0;
}