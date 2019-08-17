// (c) recycleTheC - TSRB 2019.
// Učitati broj i u funkciji odraditi je li učitani broj palindrom.

#include<stdio.h>
#include<math.h>

int palindrom(int broj);

int main() {

	int broj;

	printf("Upisi cijeli broj: ");
	scanf("%d", &broj);

	printf("Broj %d ", broj);

	if (palindrom(broj) == 1) {
		printf("je ");
	}
	else {
		printf("nije ");
	}

	printf("palindrom.\n");

	return 0;	
}

int palindrom(int broj) {

	int obrnuti=0, temp=broj;

	while (temp != 0) {
		obrnuti = obrnuti * 10 + (temp % 10);
		temp = temp / 10;
	}

	if (obrnuti == broj) {
		return 1;
	}
	else {
		return 0;
	}
}