// (c) recycleTheC - TSRB 2019.
// Upisi recenicu i ispisi drugu rijec recenice.

#include<stdio.h>
#include<string.h>

int main() {

	char r[100];
	int i, d, n=0;

	printf("Upisi recenicu: ");
	gets(r);

	d = strlen(r);

	printf("Druga rijec recenice: ");

	for (i = 0; i < d; i++) {
		if (r[i] == ' ') {
			n++;
		}
		if (n == 1) {
			printf("%c", r[i+1]);
		}
		if (n == 2) {
			break;
		}
	}

	printf("\n");

	return 0;
}