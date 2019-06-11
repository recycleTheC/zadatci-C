// (c) recycleTheC - TSRB 2019.
// Učitati riječ i u funkciji ispisati ASCII kod svakog slova u tablici pomoću pokazivača.

#include<stdio.h>
#include<string.h>

void ascii(char *pokC);

int main() {

	char r[100], *pokR;

	pokR = &r[0];

	printf("Upisi rijec: ");
	gets(pokR);

	ascii(pokR);

	return 0;

}

void ascii(char *pokC) {

	int i, d;

	d = strlen(pokC);

	printf("Slovo\tASCII kod\n");

	for (i = 0; i < d; i++) {
		printf("%c\t%d\n", *(pokC+i), *(pokC+i));
	}
	
	return;

}