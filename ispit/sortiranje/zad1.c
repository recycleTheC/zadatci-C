// (c) recycleTheC - TSRB 2019.
// Učitati 10 slova u niz i soritrati ih
// uzlazno ako korisnik upiše 'u', silazno
// ako upiše 's' ili pola uzlazno i pola silazno ako upiše 'o'. 

#include<stdio.h>

int main() {

	char slova[10], sel, temp;
	int i, j;

	for (i = 0; i < 10; i++) {
		printf("Upisi %d. slovo: ", i + 1);
		scanf(" %c", &slova[i]);
	}

	printf("Upisi slovo za sortiranje: ");
	scanf(" %c", &sel);

	switch (sel) {
	default: printf("Nije upisano ispravno slovo!\n"); break;

	case 's': 
		for (i = 0; i < 10 - 1; i++) {
			for (j = i + 1; j < 10; j++) {
				if (slova[i] < slova[j]) {
					temp = slova[i];
					slova[i] = slova[j];
					slova[j] = temp;
				}
			}
		}
		break;

	case 'u':
		for (i = 0; i < 10 - 1; i++) {
			for (j = i + 1; j < 10; j++) {
				if (slova[i] > slova[j]) {
					temp = slova[i];
					slova[i] = slova[j];
					slova[j] = temp;
				}
			}
		}
		break;

	case 'o':
		for (i = 0; i < 4; i++) {
			for (j = i + 1; j < 5; j++) {
				if (slova[i] > slova[j]) {
					temp = slova[i];
					slova[i] = slova[j];
					slova[j] = temp;
				}
			}
		}
		for (i; i < 9; i++) {
			for (j = i + 1; j < 10; j++) {
				if (slova[i] < slova[j]) {
					temp = slova[i];
					slova[i] = slova[j];
					slova[j] = temp;
				}
			}
		}
		break;
	}

	printf("Sortirana slova: ");

	for (i = 0; i < 10; i++) {
		printf("%c ", slova[i]);
	}

	printf("\n");
}