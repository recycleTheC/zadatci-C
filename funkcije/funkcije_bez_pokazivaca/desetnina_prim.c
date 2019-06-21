// (c) recycleTheC - TSRB 2019.
// Učitati 3 realna broja i u funkciji ispitati je li desetnina učitanog broja prim.

#include<stdio.h>

int prim(float x);

int main() {

	float broj;
	int rez, i;

	for (i = 0; i < 3; i++) {
		printf("Upisi %d. realni broj: ", i+1);
		scanf("%f", &broj);
		rez = prim(broj);

		printf("Desetnina broja %f ", broj);

		if (rez == 0) {
			printf("nije ");
		}
		else {
			printf("je ");
		}

		printf("prim\n");
	}

	return 0;

}

int prim(float x) {

	int d, dj;

	d = (int)(x * 10) % 10; // Desetnina učitanog broja

	if (d == 1) { // Ako je upisana desetnina 1 (npr. 1.1)
		return 1;
	}

	dj = d - 1; // Prvi sijedeći djelitelj manji o učitanog broja

	while (d % dj != 0) { // Dok nije moguće cjelobrojno podijeliti učitani broj s djeliteljem, djelitelj se smanjuje za 1
		dj--;
	}

	if (dj == 1) {
		return 1; // Vraća 1 ako je broj prim
	}
	else {
		return 0; // Vraća 0 ako broj nije prim
	}
}