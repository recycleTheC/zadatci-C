// (c) recycleTheC 2019. - Tehnička škola Ruđera Boškovića
// Nacrtati kvadrat dimenzije stranica a = 200 točkica.
// Površinu kvadrata ispuniti paralelnim okomitim linijama međusobno razmaknutima za 50 točkica.
// Boja linija stranicâ kvadrata: cijan, boja linija ispune površine kvadrata: zelena, boja pozadine: svijetlosiva.

#include<stdio.h>
#include "graphics.h"

int main() {

	int x, y;

	initwindow(400, 400);

	setbkcolor(LIGHTGRAY);
	cleardevice();

	setcolor(CYAN);
	rectangle(100, 100, 300, 300);

	for (x = 150; x < 300; x = x + 50) {
		for (y = 100; y < 300; y++) {
			putpixel(x, y, GREEN);
		}
	}

	getch();
	closegraph();

	return 0;
}