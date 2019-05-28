// (c) recycleTheC - TSRB 2019.
// Za 6 bića učitati u polje struktura naziv, broj nogu i da li ima krila. Nazive bićâ (čovjek,
// pas, ptica, rak, zmija, pingvin), broj nogu (2, 4, 6) i da li ima krila (ima, nema)
// enumerirati. Zatražiti od korisnika upis bićâ i ispisati sve podatke o izabranom biću.

#include<stdio.h>

enum _naziv_bica {
	Covjek = 1,
	Pas,
	Ptica,
	Rak,
	Zmija,
	Pingvin
};

enum _broj_nogu_bica {
	Dvije = 1,
	Cetiri,
	Sest,
	Nema_noge=0
};

enum _krila {
	Ima = 1,
	Nema
};

struct ziva_bica {
	enum _naziv_bica naziv;
	enum _broj_nogu_bica noge;
	enum _krila krila;
};

int main() {

	int i;
	struct ziva_bica bice[6];
	enum _naziv_bica sel;

	for (i = 0; i < 6; i++) {
		printf("Upisi naziv %d. bica: \n", i + 1);
		printf("1 - covjek\n");
		printf("2 - pas\n");
		printf("3 - ptica\n");
		printf("4 - rak\n");
		printf("5 - zmija\n");
		printf("6 - pingvin\n: ");
		scanf("%d", &bice[i].naziv);

		printf("Upisi broj nogu %d. bica:\n", i + 1);
		printf("1 - 2 noge\n");
		printf("2 - 4 noge\n");
		printf("3 - 6 nogu\n");
		printf("0 - nema nogu\n: ");
		scanf("%d", &bice[i].noge);

		printf("Upisi ima li %d. bice krila:\n", i + 1);
		printf("1 - ima\n");
		printf("2 - nema\n: ");
		scanf("%d", &bice[i].krila);
		printf("\n");
	}

	printf("Upisi za koje bice zelis ispisati podatke: \n");
	printf("1 - covjek\n");
	printf("2 - pas\n");
	printf("3 - ptica\n");
	printf("4 - rak\n");
	printf("5 - zmija\n");
	printf("6 - pingvin\n: ");
	scanf("%d", &sel);

	switch (sel){
	default: printf("Nije upisano ispravno bice!\n"); break;

	case Covjek:
		printf("Podatci o ljudima: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Covjek) {
				printf("\ncovjek, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	case Pas:
		printf("Podatci o psima: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Pas) {
				printf("\npas, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	case Ptica:
		printf("Podatci o pticama: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Ptica) {
				printf("\nptica, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	case Rak:
		printf("Podatci o rakovima: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Rak) {
				printf("\nrak, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	case Zmija:
		printf("Podatci o zmijama: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Zmija) {
				printf("\nzmija, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	case Pingvin:
		printf("Podatci o pingvinima: ");
		for (i = 0; i < 6; i++) {
			if (bice[i].naziv == Covjek) {
				printf("\npingvin, ");
				if (bice[i].noge == Dvije) {
					printf("dvije noge, ");
				}
				if (bice[i].noge == Cetiri) {
					printf("cetiri noge, ");
				}
				if (bice[i].noge == Sest) {
					printf("sest nogu, ");
				}
				if (bice[i].noge == Nema_noge) {
					printf("nema nogu, ");
				}
				if (bice[i].krila == Ima) {
					printf("ima krila");
				}
				else {
					printf("nema krila");
				}
			}
		}
		break;

	}

	printf("\n");

	return 0;

}