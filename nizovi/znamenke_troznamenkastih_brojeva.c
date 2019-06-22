// (c) recycleTheC - TSRB 2019.
// Učitati 6 troznamenkastih brojeva i u posebna
// polja izračunati stotice, desetice i jedninice za svaki.

#include<stdio.h>

int main() {

	int i, broj[6], s[6], d[6], j[6];

	for (i = 0; i < 6; i++) {
		printf("Upisi %d. troznamenskasti broj: ", i + 1);
		scanf("%d", &broj[i]);

		s[i] = broj[i] / 100;
		d[i] = broj[i] / 10 % 10;
		j[i] = broj[i] % 10;
	}

	// Ispis je moguće napraviti i na drugačiji način, npr. unutar prve for petlje -> za svaki broj odmah nakon upisa

	printf("\nBroj\tStotice\tDesetice Jedinice\n");

	for (i = 0; i < 6; i++) {
		printf("%d\t%d\t%d\t %d\n", broj[i], s[i], d[i], j[i]);
	}
}