// (c) recycleTheC - TSRB 2019.
// Učitati 2 broja i u funkciji izračunati njihov najmanji zajednički višekratnik.

#include<stdio.h>

int visekratnik(int x, int y);

int main() {

	int a, b, rez;

	printf("Upisi prvi broj: ");
	scanf("%d", &a);

	printf("Upisi drugi broj: ");
	scanf("%d", &b);

	rez = visekratnik(a, b);

	printf("Najmanji zajednicki visekratnik brojeva: %d\n", rez);

	return 0;
}

int visekratnik(int x, int y) {

	int i, j, v = 0;

	if (x > y) {
		v = x;
	}
	else {
		v = y;
	}

	while (1) { // uvjet je uvijek istinit, petlja se ponavlja dok ju ne zaustavi break; u ispitivanju
		if (v % x == 0 && v % y == 0) {
			return v;
			break;
		}
		v++;
	}
}