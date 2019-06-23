// (c) recycleTheC 2019. - Tehnička škola Ruđera Boškovića
// Nacrtati x i y osi koordinatnog sustava u I. kvadrantu. Označiti osi na krajevima i
// ishodište sa 0. Učitati duljinu stranice kocke i udaljenost središta kocke od ishodišta
// te nacrtati kocku. Prednju plohu kocke ispuniti plavom bojom, a gornju
// plohu zelenom bojom, a bočnu plohu crvenom. Označiti vidljive vrhove kocke slovima, počevši od A. Uz
// jedan brid kocke ispisati duljinu stranice kvadrata (npr., a = 200), a na sredini prednje
// plohe ispisati iznos površine plohe (npr., P = 2000). Ispod koordinatnog sustava
// ispisati vrijednosti oplošja i volumena kocke.

// Zbog jednostavnijeg korištenja i preglednosti programa, u ovom rješenju su korištene strukture za koordinate točaka!

#include<stdio.h>
#include<math.h>
#include "graphics.h"

struct koordinate {
	int x = 0;
	int y = 0;
};

int main() {

	int brid=0; // Duljina osnovnog brida kocke
	struct koordinate ishodiste; // Koordinate ishodista
	struct koordinate s; // Koordinate središta kocke
	struct koordinate a; // Koordinate vrha a
	struct koordinate d; // Koordinate vrha d
	char str[128]; // String za ispis teksta 

	ishodiste.x = 10; // Koordinate ishodišta
	ishodiste.y = 700; // Koordinate ishodišta

	printf("Upisi duljinu osnovnog brida kocke: ");
	scanf("%d", &brid);

	printf("Upisi udaljenost sredista kocke od ishodista (x,y): ");
	scanf("%d,%d", &s.x, &s.y);

	// Računanje koordinata za vrhove kocke
	// Opisani postupak nije savršen niti precizan

	a.x = s.x - brid * sqrt(3)/2 + ishodiste.x;
	a.y = ishodiste.y - s.y - brid * sqrt(3)/2;

	d.x = a.x + brid;
	d.y = a.y + brid;

	initwindow(800, 800); // Otvaranje prozora

	// Iscrtavanje koordinatnog sustava

	line(10, 10, 10, 700);
	line(10, 700, 700, 700);
	outtextxy(ishodiste.x, ishodiste.y + 10, "0");
	outtextxy(700, 700, "x");
	outtextxy(0, 10, "y");

	// Iscrtavanje kocke

	setfillstyle(SOLID_FILL, BLUE); // Postavljanje ispune prednje plohe
	bar3d(a.x, a.y, d.x, d.y, brid / 2, 1); // Crtanje kocke s vrhom
	setfillstyle(SOLID_FILL, GREEN); // Postavljanje ispune gornje plohe
	floodfill(a.x + (brid / 2), a.y - (brid / 4), getcolor()); // Ispunjavanje gornje plohe
	setfillstyle(SOLID_FILL, RED); // Postavljanje ispune bočne plohe
	floodfill(d.x + (brid / 4), d.y - (brid / 4), getcolor()); // Ispunjavanje bočne plohe

	// Ispis teksta

	// funkcija sprintf();
	// sprintf(naziv_stringa, "tekst koji se ispisuje u string", varijable_iz_kojih_se_uzimaju_vrijednosti);

	outtextxy(a.x, d.y + 5, "A");
	outtextxy(d.x, d.y + 5, "B");
	outtextxy(d.x + brid/2, d.y - brid/4, "C");
	outtextxy(a.x - 10, a.y - 20, "A1");
	outtextxy(d.x + 10, a.y - 20, "B1");
	outtextxy(d.x + brid / 2, a.y - brid / 3, "C1");
	outtextxy(a.x + brid / 3, a.y - brid / 3, "D1");

	sprintf(str, "a = %d", brid);
	outtextxy(a.x + (brid / 4), d.y, str); // Ispis vrijednosti duljine brida

	setbkcolor(BLUE); // Postavljanje pozadine teksta u boju ispune prednje plohe
	sprintf(str, "P = %d", brid * brid);
	outtextxy(a.x + (brid / 4), a.y + (brid / 2), str); // Ispis vrijednosti površine plohe

	setbkcolor(BLACK); // Postavljanje pozadine teksta u boju pozadine
	sprintf(str, "O = %d", 6 * brid * brid);
	outtextxy(ishodiste.x, ishodiste.y + 30, str); // Ispis vrijednosti oplošja
	sprintf(str, "V = %d", brid * brid * brid);
	outtextxy(ishodiste.x, ishodiste.y + 50, str); // Ispis vrijednosti volumena

	getch();
	closegraph();

	return 0;
}