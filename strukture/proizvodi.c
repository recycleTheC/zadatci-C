// (c) recycleTheC - TSRB 2019.
// Učitati naziv, proizvođača, cijenu i količinu na skladištu za 5 proizvoda.
// Nakon toga, ispisati sve proizvode kojih ima na skladištu i zatim
// sortirati sve proizvode prema rastućoj cijeni i ispisati ih.

#include<stdio.h>

struct proizvodi {
	char naziv[25];
	char producer[25];
	float cijena;
	int kol;
};

int main() {

	int i, j;
	struct proizvodi proizvod[5], temp;

	for (i = 0; i < 5; i++) {
		printf("Upisi naziv, proizvodaca, cijenu i kolicinu na skladistu za %d. proizvod: ", i + 1);
		scanf("%s %s %f %d", proizvod[i].naziv, proizvod[i].producer, &proizvod[i].cijena, &proizvod[i].kol);
	}

	printf("\nProizvodi kojih ima na skladistu:\n");

	for (i = 0; i < 5; i++) {
		if (proizvod[i].kol > 0) {
			printf("%s, %s, %.2f kn, %d kom\n", proizvod[i].naziv, proizvod[i].producer, proizvod[i].cijena, proizvod[i].kol);
		}
	}

	printf("\nSortirani proizvodi prema rastucoj cijeni:\n");

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (proizvod[i].cijena > proizvod[j].cijena) {
				temp = proizvod[i];
				proizvod[i] = proizvod[j];
				proizvod[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%s, %s, %.2f kn, %d kom\n", proizvod[i].naziv, proizvod[i].producer, proizvod[i].cijena, proizvod[i].kol);
	}

    return 0;
}