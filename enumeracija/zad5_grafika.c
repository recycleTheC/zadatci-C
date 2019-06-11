// Rješenje (c) recycleTheC - TSRB 2019.
// BGI (c) University of Colorado 2004.

// Enumerirati 3 boje iz spektra boja dostupnih za crtanje. Enumerirati nazive za tri
// geometrijska lika(pravokutnik, kružnicu i elipsu). Zatražiti od korisnika upis boje
// iscrtavanja lika, upis boje ispune i upis naziva geometrijskoga lika i iscrtati odabrani lik
// u definiranoj boji i sa definiranom bojom ispune.

#include<stdio.h>
#include"graphics.h"

enum boje {
	Crvena = 1,
	Zelena,
	Plava
};

enum likovi {
	Pravokutnik=1,
	Kruznica,
	Elipsa
};

int main() {

	enum boje iscrtavanje; enum likovi lik; enum boje ispuna;

	printf("Odaberite boju iscrtavanja lika:\n");
	printf("1 - crvena\n");
	printf("2 - zelena\n");
	printf("3 - plava\n: ");
	scanf("%d", &iscrtavanje);

	printf("\nOdaberite boju ispune lika:\n");
	printf("1 - crvena\n");
	printf("2 - zelena\n");
	printf("3 - plava\n: ");
	scanf("%d", &ispuna);

	printf("\nOdaberite lik koji ce se iscrtati:\n");
	printf("1 - pravokutnik\n");
	printf("2 - krznica\n");
	printf("3 - elipsa\n: ");
	scanf("%d", &lik);

	initwindow(500, 500);

	switch (iscrtavanje) {
	case Crvena: setcolor(COLOR(255, 0, 0)); break;
	case Zelena: setcolor(GREEN); break;
	case Plava: setcolor(BLUE); break;
	}

	switch (lik) {
	default: printf("Nije upisan ispravan lik!\n"); break;
	case Pravokutnik: rectangle(100, 100, 400, 400); break;
	case Elipsa: ellipse(250, 250, 0, 360, 100, 50); break;
	case Kruznica: circle(250, 250, 100); break;
	}

	switch (ispuna) {
	case Crvena: setfillstyle(SOLID_FILL, COLOR(255, 0, 0)); floodfill(250, 250, getcolor()); break;
	case Zelena: setfillstyle(SOLID_FILL, GREEN); floodfill(250, 250, getcolor()); break;
	case Plava: setfillstyle(SOLID_FILL, BLUE); floodfill(250, 250, getcolor()); break;
	}

	getch();
	closegraph();

	return 0;

}

