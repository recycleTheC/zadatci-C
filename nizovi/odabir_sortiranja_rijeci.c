// (c) recycleTheC - TSRB 2019.
// Učitati riječ i nakon toga slovo 'u' ili 's'.
// Sortirati slova rijeli ulazno ako je upisano slovo 'u'
// ili silazno ako je učitano slovo 's'.

#include<stdio.h>
#include<string.h>

int main() {

	int i, j, d;
	char r[255], sel, temp;

	printf("Upisi rijec: ");
	gets(r);

	printf("Upisi slovo:\nu - za sortiranje uzlazno\ns - za sortiranje silazno\n: ");
	scanf(" %c", &sel);

	d = strlen(r);

	switch (sel) {
	default: printf("Nije upisano ispravno slovo!\n"); break;
	case 'u': 
		for (i = 0; i < d - 1; i++) {
			for (j = i + 1; j < d; j++) {
				if (r[i] > r[j]) {
					temp = r[i];
					r[i] = r[j];
					r[j] = temp;
				}
			}
		}
		break;
	case 's': 
		for (i = 0; i < d - 1; i++) {
			for (j = i + 1; j < d; j++) {
				if (r[i] < r[j]) {
					temp = r[i];
					r[i] = r[j];
					r[j] = temp;
				}
			}
		}
		break;
	}

	printf("Rijec nakon sortiranja: %s\n", r);

	return 0;
}