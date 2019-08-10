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

	for (i = 0; i < d; i++) {
		if (r[i] == ' ') {
			n++;
		}
		if (n == 1) {
			printf("Druga rijec recenice: ");
			for (i=i+1; i < d && r[i] != ' '; i++) {
				printf("%c", r[i]);
			}
			printf("\n");
			break;
		}
	}

	if (n == 0) {
		printf("Recenica ima samo jednu rijec!\n");
	}

	return 0;
}