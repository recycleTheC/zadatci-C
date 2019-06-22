// (c) recycleTheC - TSRB 2019.
// Učitati znak-znamenku i u funkciji ispitati jeli prim

#include<stdio.h>

int prim(char x);

int main() {

	int i, rez;
	char znak;

	do {
		printf("Upisite znak-znamenku:");
		scanf(" %c", &znak);
	} while (!(znak >= '0' && znak <= '9'));

	rez = prim(znak);

	printf("Broj %c ", znak);

	if (rez == 1) {
		printf("je ");
	}
	else {
		printf("nije ");
	}

	printf("prim!\n");

	return 0;
}

int prim(char x) {

	int d;

	d = x - '0' - 1;

	if (d == 0) {
		return 1;
	}

	while ((x - '0') % d != 0){
        d--;
	}

	if (d == 1) {
		return 1;
	}
	else {
		return 0;
	}
}