// (c) recycleTheC - TSRB 2019.
// Učitati ukupno 6 prirodnih i cjelih brojeva i
// za svaki realni broj izračunati aritmetičku sredinu
// neparnih znamenki desetnina, stotnina i tisućnina.

#include<stdio.h>

int main() {

	int i, d, s, t, k = 0, zbr, n;
	float broj[6], arsr[6];

	for (i = 0; i < 6; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &broj[i]);

		if (broj[i] != (int)broj[i]) {

			zbr = 0;
			n = 0;

			d = (int)(broj[i] * 10) % 10;
			s = (int)(broj[i] * 100) % 10;
			t = (int)(broj[i] * 1000) % 10;

			if (d % 2 != 0) {
				zbr = zbr + d;
				n++;
			}
			if (s % 2 != 0) {
				zbr = zbr + s;
				n++;
			}
			if (t % 2 != 0) {
				zbr = zbr + t;
				n++;
			}

			if (n != 0) {
				arsr[k] = (float)zbr / n;
				printf("Aritmeticka sredina neparnih znamenki broja: %f\n", arsr[k]);
			}
			else {
				printf("Upisani broj nema neparnih znamenki u decimalnom dijelu!\n");
			}

			k++; // Važno je da se brojač za polje arsr poveća za 1
			
		}
	}

	return 0;
}