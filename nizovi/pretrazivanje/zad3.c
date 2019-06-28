// (c) recycleTheC - TSRB 2019.
// Upisati 6 brojeva u polje i nakon toga broj koji se traži u polju.
// AKo se broj pojavljuje u polju, pojavljuje li se prvi puta u prvoj ili drugoj
// polovini polja

#include<stdio.h>

int main() {

	int i, broj[6], sel, n = 0;

	for (i = 0; i < 6; i++) {
		printf("Upisi %d. slovo: ", i + 1);
		scanf("%d", &broj[i]);
	}

	printf("Upisi broj za pretragu: ");
	scanf("%d", &sel);

	for (i = 0; i < 6; i++) {
		if (broj[i] == sel) {
			n = i + 1;
			break;
		}
	}

	printf("Broj %d se ", sel);

	if (n != 0) {

		printf("prvi put pojavljuje u ");

		if(n<=3){
			printf("prvoj ");
		}
		else {
			printf("drugoj ");
		}

		printf("polovini niza!\n");
	}
	else {
		printf("ne pojavljuje u nizu!\n");
	}

	return 0;
}