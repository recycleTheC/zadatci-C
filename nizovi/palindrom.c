// (c) recycleTheC - TSRB 2019.
// Učitati riječ i ispitati je li učitana riječ palindrom.

#include<stdio.h>
#include<string.h>

int main() {

	int i, j, d;
	char rijec[255], palindrom[255] = "";

	printf("Upisi rijec: ");
	scanf("%s", rijec);

	d = strlen(rijec);
	j = 0;

	for (i = d - 1; i >= 0; i--) {
		palindrom[j] = rijec[i];
		j++;
	}

	printf("Rijec '%s' ", rijec);

	if (strcmp(rijec, palindrom) == 0) {
		printf("je ");
	}
	else {
		printf("nije ");
	}

	printf("palindrom.\n");

	return 0;
}