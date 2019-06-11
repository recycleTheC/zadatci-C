// (c) recycleTheC - TSRB 2019.
// (c) Mojwebdizajn.net 2012-2019
// Učitati tri broja. U funkciji pronaći od najveći broj!

#include <stdio.h>

int maksimum(int x, int y, int z);

int main() {

	int a, b, c, m;

	printf("Upisi tri broja: ");
	scanf("%d %d %d", &a, &b, &c);

	m=maksimum(a, b, c);

    printf("Najveci upisani broj je %d\n", m);

	return 0;
}

int maksimum(int x, int y, int z) {

	int max;
	max = x;

	if (y > max)
		max = y;

	if (z > max)
		max = z;

	return max;

}