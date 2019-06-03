// (c) recycleTheC 2019. - Tehnička škola Ruđera Boškovića
// Nacrtati x i y osi koordinatnog sustava u I. kvadrantu. Označiti osi na krajevima i
// ishodište sa 0. Učitati duljinu polumjera kružnice i udaljenost središta kružnice od
// ishodišta te nacrtati kružnicu. Ispuniti površinu unutar kružnice sivom bojom. Označiti
// središte sa X, spojiti isprekidanom bijelom linijom središte kružnice sa rubom kružnice
// i iznad linije ispisati vrijednost polumjera (npr., r = 100).

#include<stdio.h>
#include "graphics.h"

int main() {

    int x = 10, y = 780; // Koordinate ishodišta
	int r, dx, dy; // Duljina radijusa i udaljenost središta od ishodišta
	int sX, sY; // Koordinate središta kružnice
	char str[128]; // String za ispis teksta 

	printf("Upisi duljinu polumjera kruznice: ");
	scanf("%d", &r);

	printf("Upisi udaljenost sredista krunice od ishodista (x,y): ");
	scanf("%d,%d", &dx, &dy);

    // Računanje koordinata za središte kružnice

	sX = x + dx;
	sY = y - dy;

	initwindow(800, 850); // Otvaranje prozora

    // Iscrtavanje koordinatnog sustava

	line(10, 10, 10, 780);
	line(10, 780, 780, 780);
	outtextxy(x, y+10, "0");
	outtextxy(780, 780, "x");
	outtextxy(0, 10, "y");

    // Iscrtavanje kružnice

	circle(sX, sY, r); // Crtanje kružnice
	setfillstyle(SOLID_FILL, LIGHTGRAY); // Postavljanje boje ispune
	floodfill(sX, sY, WHITE);  // Ispunjavanje kružnice sivom bojom
	setlinestyle(DASHED_LINE, 1, 1); // Postavljanje iscrtkane linije
	line(sX, sY, sX + r, sY); // Iscrtavanje radijusa
	setbkcolor(LIGHTGRAY); // Ispuna pozadine teksta
	outtextxy(sX, sY, "x"); // Središte kružnice

	sprintf(str, "r = %d", r); // Kreiranje stringa sa tekstom "r = duljina_radijus"
	outtextxy(sX + (r/2), sY - 20, str); // Ispis stringa iznad radijusa
	
	getch();
	closegraph();

    return 0;
}