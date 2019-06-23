// (c) recycleTheC 2019. - Tehnička škola Ruđera Boškovića
// Nacrtati horizontalnu liniju zelene boje od lijevog do desnog ruba prozora. Učitati
// vrijednost polumjera kružnice i na horizontalnoj liniji nacrtati kružnicu uz lijevi rub
// prozora punom linijom žute boje. Na početku linije, ispod kružnice ispisati vrijednost
// x koordinate središta kružnice (npr., x = 100) boje magenta. Animirati pomicanje kružnice do desnog
// ruba prozora i istovremeno na početku linije ispisivati promjene vrijednosti središta
// kružnice (Napomena: upotrijebiti funkcije delay(x) za kašnjenje od x sekundi i funkciju
// cleardevice() za brisanje sadržaja prozora!)

#include<stdio.h>
#include"graphics.h"

int main() {

	int r, i, w = 800, h = 800;
	char koordinate[25];

	printf("Upisi duljinu polumjera kruznice: ");
	scanf("%d", &r);

	initwindow(w, h);

	setcolor(GREEN);
	line(0, h / 2, w, h / 2);

	for (i = r; i <= (w - r); i++) {
		setcolor(GREEN);
		line(0, h / 2, w, h / 2);
		setcolor(YELLOW);
		circle(i, h / 2, r);
		sprintf(koordinate, "x = %d", i);
		setcolor(MAGENTA);
		outtextxy(0, (h / 2) + r, koordinate);
		delay(35);
		cleardevice();
	}

	setcolor(GREEN);
	line(0, h / 2, w, h / 2);

	getch();
	closegraph();

	return 0;
}