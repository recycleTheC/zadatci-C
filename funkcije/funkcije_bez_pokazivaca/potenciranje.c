// (c) recycleTheC - TSRB 2019.
// (c) Mojwebdizajn.net 2012-2019
// Napisati funkciju za potenciranje dva broja x ^ y.

#include <stdio.h>

int potenciranje(int x, int y);

int main() {

	int a, b, pot;

	printf("Unesite broj za potenciranje: ");
	scanf("%d", &a);

    printf("Unesite potenciju broja: ");
	scanf("%d", &b);

	pot = potenciranje(a, b);

	printf("Rezultat %d^%d: %d\n", a, b, pot);

	return 0;
}

int potenciranje(int x, int y){

	int i, rez;

	rez=x;

	if(y==0){
		rez=0;
    }

	for(i=1; i<y; i++){
		rez=rez*x;
    }
    
	return rez;
}