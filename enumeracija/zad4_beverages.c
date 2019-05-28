// (c) recycleTheC - TSRB 2019.
// Za 6 pićâ učitati u polje strukturâ naziv, kapacitet boce u litrama i cijenu. Kapacitete
// od 2 litre, 1.5 litre, 1 litre, 0.5 litre i 0.33 litre enumerirati i definirati kao član
// strukture.Zatražiti od korisnika upis kapaciteta boce i ispisati podatke o svim pićima
// sa tim kapaciteotm boce.

#include<stdio.h>

enum _volumen {
	litra_2 = 1,
	litra_1_5,
	litra_1,
	litra_0_5,
	litra_0_33
};

struct beverages {
	char naziv[25];
	enum _volumen volumen;
	float cijena;
};

int main() {

	int i;
	struct beverages p[6]; enum _volumen sel;

	for (i = 0; i < 6; i++) {
		printf("Upisi naziv i cijenu %d. pica: ", i + 1);
		scanf("%s %f", p[i].naziv, &p[i].cijena);
		printf("Upisi volumen za %d. pice:\n", i+1);
		printf("1 - 2 litre\n");
		printf("2 - 1.5 litara\n");
		printf("3 - 1 litra\n");
		printf("4 - 0.5 litara\n");
		printf("5 - 0.33 litara\n: ");
		scanf("%d", &p[i].volumen);
		printf("\n");
	}
	
	printf("Upisi volumen za sortiranje podataka: ");
	scanf("%d", &sel);

	switch (sel){
	default: printf("Nije upisan ispravan volumen!\n"); break;
	case litra_2:
		printf("Pica volumena 2 litre:\n");
		for (i = 0; i < 6; i++) {
			if (p[i].volumen == litra_2) {
				printf("%s %.2f\n", p[i].naziv, p[i].cijena);
			}
		}
		break;

	case litra_1_5:
		printf("Pica volumena 1.5 litara:\n");
		for (i = 0; i < 6; i++) {
			if (p[i].volumen == litra_1_5) {
				printf("%s %.2f\n", p[i].naziv, p[i].cijena);
			}
		}
		break;

	case litra_1:
		printf("Pica volumena 1 litre:\n");
		for (i = 0; i < 6; i++) {
			if (p[i].volumen == litra_1) {
				printf("%s %.2f\n", p[i].naziv, p[i].cijena);
			}
		}
		break;
	case litra_0_5:
		printf("Pica volumena 0.5 litara:\n");
		for (i = 0; i < 6; i++) {
			if (p[i].volumen == litra_0_5) {
				printf("%s %.2f\n", p[i].naziv, p[i].cijena);
			}
		}
		break;
	case litra_0_33:
		printf("Pica volumena 0.33 litre:\n");
		for (i = 0; i < 6; i++) {
			if (p[i].volumen == litra_0_33) {
				printf("%s %.2f\n", p[i].naziv, p[i].cijena);
			}
		}
		break;
	}

	return 0;
}