// (c) recycleTheC - TSRB 2019.
// Učitati broji u funkciji provjeriti je li prost.

#include <stdio.h>

void prostbroj(int x);

int main() {

	int a;

	printf("Upisi broj: ");
	scanf("%d", &a);

	prostbroj(a);

	return 0;
}

void prostbroj(int x) {

	int i = x - 1;

	while (x % i != 0) {
		i--;
	}

	if (i == 1) {
		printf("Broj je prost\n");
	}
	else {
		printf("Broj nije prost\n");
	}

	return;
}