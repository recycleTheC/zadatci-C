// (c) recycleTheC - TSRB 2019.
// Učitati 4 razreda i broj izostanaka za svaki razred.
// Ispisati ukupan broj izostanaka i razred s najmanjim brojem izostanaka

#include<stdio.h>

struct razredi {
	char oznaka[4];
	int izostanci;
};

int main() {

	int i, brojIzostanaka = 0;
	struct razredi raz[4], min;

	for (i = 0; i < 4; i++) {
		printf("Upisi naziv i broj izostanaka za %d. razred: ", i + 1);
		scanf("%s %d", raz[i].oznaka, &raz[i].izostanci);
		brojIzostanaka = brojIzostanaka + raz[i].izostanci;
	}

	printf("Ukupan broj izostanaka: %d\n", brojIzostanaka);

	min = raz[0];

	for (i = 1; i < 4; i++) {
		if (raz[i].izostanci < min.izostanci) {
			min = raz[i];
		}
	}

	printf("Razred s najmanjim brojem izostanaka: %s (%d)\n", min.oznaka, min.izostanci);

	return 0;
}