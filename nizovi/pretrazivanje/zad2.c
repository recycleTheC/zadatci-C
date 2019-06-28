// (c) recycleTheC - TSRB 2019.
// Upisati 6 brojeva u polje i nakon toga broj koji se traži u polju.
// Ispitati pojavljuje li se znak u polju paran ili neparan broj puta.

#include<stdio.h>

int main() {

	int i, n = 0, broj[6], sel;

	for (i = 0; i < 6; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%d", &broj[i]);
	}

	printf("Upisi broj za pretragu: ");
	scanf("%d", &sel);

	for (i = 0; i < 6; i++) {
		if (broj[i] == sel) {
			n++;
		}
	}

	printf("Broj %d se u nizu ", sel);

	if (n != 0) {
		if (n % 2 == 0) {
			printf("pojavljuje paran ");
		}
		else {
			printf("pojavljuje neparan ");
		}
		printf("broj puta!\n");
	}
	else {
		printf("ne pojavljuje!\n");
	}

	return 0;
}
