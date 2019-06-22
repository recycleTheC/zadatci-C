// (c) recycleTheC - TSRB 2019.
// Učitati broj učenika u razredu. Pretpostaviti da u razredu nema više od 40 učenika.
// Učitati za svakog učenika: ime, prezime, prosjek svih ocjena i broj izostanaka.
// Ispisati listu odličnih učenika; listu učenika koji imaju manji broj izostanaka od prosjeka;
// listu učenika koji nisu prošli razred i statistiku prolaznosti.
// Ispisati prosječnu ocjenu razreda

#include<stdio.h>
#include<string.h>

struct ucenici
{
	char ime[25], prezime[25];
	float prosjek;
	int izostanci;
};

int main() {

	int i, j, n, k=0, neg=0, odl=0;
	float arsrO, zbr=0; // prosjek ocjena
	int zbrI = 0; float arsrI; // prosjek izostanaka
	struct ucenici uc[40], temp;

	printf("Upisi broj ucenika u razredu: ");
	scanf("%d", &n);

	if (n > 40) {
		printf("Nije moguce koristiti program na vise od 40 ucenika!\n");
		return 0;
	}

	for (i = 0; i < n; i++) {
		printf("Upisi podatke za %d. ucenika: ", i + 1);

		printf("\nime: ");
		scanf("%s", uc[i].ime);

		printf("prezime: ");
		scanf("%s", uc[i].prezime);

		printf("ukupan prosjek ocjena: ");
		scanf("%f", &uc[i].prosjek);

		while(!(uc[i].prosjek>=0 && uc[i].prosjek<=5)){
			printf("Nije upisan ispravan prosjek!\n");
			printf("ukupan prosjek ocjena: ");
			scanf("%f", &uc[i].prosjek);
		}

		printf("broj izostanaka: ");
		scanf("%d", &uc[i].izostanci);
		printf("\n");

		if (uc[i].prosjek > 1.5) {
			zbr = zbr + uc[i].prosjek;
			k++;
		}
		else {
			neg++;
		}

		if (uc[i].prosjek > 4.5) {
			odl++;
		}

		zbrI = zbrI + uc[i].izostanci;
	}

	arsrO = (float)zbr / n;

	if (zbrI != 0) {
		arsrI = (float)zbrI / n;
	}
	else {
		arsrI = 0;
	}
	
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (strcmp(uc[i].prezime, uc[j].prezime) == 1) {
				temp = uc[i];
				uc[i] = uc[j];
				uc[j] = temp;
			}
		}
	}

	if (odl != 0) {

		printf("Ucenici koji imaju odlican ukupan prosjek ocjena:\n");

		for (i = 0; i < n; i++) {
			if (uc[i].prosjek > 4.5) {
				printf("%s %s, %.2f\n", uc[i].ime, uc[i].prezime, uc[i].prosjek);
			}
		}
	}
	else {
		printf("Nema ucenika koji je prosao s odlicnim uspjehom!\n");
	}
	printf("\n");

	printf("Ucenici koji imaju manji broj izostanaka od prosjeka (%.f): \n", arsrI);

	for (i = 0; i < n; i++) {
		if (uc[i].izostanci < arsrI) {
			printf("%s %s, %d izostanaka\n", uc[i].ime, uc[i].prezime, uc[i].izostanci);
		}
	}
	printf("\n");

	if (neg != 0) {

		printf("Ucenici koji nisu prosli razred:\n");

			for (i = 0; i < n; i++) {
				if (uc[i].prosjek < 1.5) {
					printf("%s %s\n", uc[i].ime, uc[i].prezime);
				}
			}
		printf("\n");
	}
	else {
		printf("Svi ucenici su prosli razred!\n");
	}

	printf("Statistika prolaznosti:\n");
	printf("%d/%d - %.2f%%\n", n - neg, n, ((float)(n-neg)/n)*100);

	printf("Prosjecna ocjena razreda: %.2f\n", arsrO);

	return 0;
}