// (c) recycleTheC - TSRB 2019.
// Učitati cijeli broj x. Napraviti funkciju koja će izračunati vrijednost prema uvjetima:
// x^2 za x =1, 3 ili 5
// sqrt(x) X =2, 4 ili 6
// 2*x za x = 7, 8 ili 9
// 0 za ostale vrijednosti

#include<stdio.h>
#include<math.h>

float funkcija(int x);

int main() {

	int x;
	float f;

	printf("Upisite cijeli broj:");
	scanf("%d", &x);
	
	f=funkcija(x);

	printf("f = %.2f\n", f);
	return 0;
}

float funkcija(int x){

    float f;

    if (x == 1 || x == 3 || x == 5) {
		f = pow(x, 2);
	}
	else if (x == 2 || x == 4 || x == 6) {
		f = sqrt(x);
	}
	else if (x == 7 || x == 8 || x == 9) {
		f = 2 * x;
	}
    else f = 0;

    return f;
}