// (c) recycleTheC - TSRB 2019.
// Učitati četiri riječi i ispisati riječ s najvećim brojem slova.

#include<stdio.h>
#include<string.h>

int main() {

	int i, maxD;
	char rijec[4][255], max[255];

	for (i = 0; i < 4; i++) {
		printf("Upisi %d. rijec: ", i + 1);
		gets(rijec[i]); // moguće koristiti i scanf("%s", rijec[i]);
	}

	maxD = strlen(rijec[0]);
	strcpy(max, rijec[0]);

	for (i = 1; i < 4; i++) {
		if (strlen(rijec[i]) > maxD) {
			maxD = strlen(rijec[i]);
			strcpy(max, rijec[i]);
		}
	}

	printf("Rijec s najvecim brojem znakova: %s\n", max);

	return 0;
}