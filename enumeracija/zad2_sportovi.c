// (c) recycleTheC - TSRB 2019.
// Za 6 osobâ učitati u polje strukturâ ime, prezime, starost i sport koji osoba trenira.
// Nogomet, košarku, hokej na ledu i borilački sport enumerirati i definirati kao član
// strukture. Zatražiti od korisnika odabir jednog sporta i ispisati sve podatke o osobi
// koja trenira taj sport.

#include<stdio.h>

enum sportovi {
	Nogomet = 1,
	Kosarka,
	Hokej_na_ledu,
	Borilacki_sport
};

struct osobe {
	char ime[25], prezime[25];
	int starost;
	enum sportovi sport;
};

int main() {

	int i;
	struct osobe os[6]; enum sportovi sel;

	for (i = 0; i < 6; i++) {
		printf("Upisi ime, prezime i starost za %d. osobu: ", i + 1);
		scanf("%s %s %d", os[i].ime, os[i].prezime, &os[i].starost);
		printf("Upisi sport kojim se bavi %d. osoba:\n", i + 1);
		printf("1 - nogomet\n");
		printf("2 - kosarka\n");
		printf("3 - hokej na ledu\n");
		printf("4 - borilacki sport\n: ");
		scanf("%d", &os[i].sport);
		printf("\n");
	}

	printf("Odaberi sport za soritanje podataka:\n");
	printf("1 - nogomet\n");
	printf("2 - kosarka\n");
	printf("3 - hokej na ledu\n");
	printf("4 - borilacki sport\n: ");
	scanf("%d", &sel);

	switch (sel) {
	default: printf("Nije upisan ispravan sport!\n"); break;

	case Nogomet:
		printf("Osobe koje se bave nogometom:\n");
		for (i = 0; i < 6; i++) {
			if (os[i].sport == Nogomet) {
				printf("%s %s %d god\n", os[i].ime, os[i].prezime, os[i].starost);
			}
		}
		break;

	case Kosarka:
		printf("Osobe koje se bave kosarkom:\n");
		for (i = 0; i < 6; i++) {
			if (os[i].sport == Kosarka) {
				printf("%s %s %d god\n", os[i].ime, os[i].prezime, os[i].starost);
			}
		}
		break;
		
	case Hokej_na_ledu:
		printf("Osobe koje se bave hokejem na ledu:\n");
		for (i = 0; i < 6; i++) {
			if (os[i].sport == Hokej_na_ledu) {
				printf("%s %s %d god\n", os[i].ime, os[i].prezime, os[i].starost);
			}
		}
		break;

	case Borilacki_sport:
		printf("Osobe koje se bave borilackim sportovima:\n");
		for (i = 0; i < 6; i++) {
			if (os[i].sport == Borilacki_sport) {
				printf("%s %s %d god\n", os[i].ime, os[i].prezime, os[i].starost);
			}
		}
		break;
	}

	return 0;
}