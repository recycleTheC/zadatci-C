// (c) recycleTheC - TSRB 2019.
// Učitati n slova i u funkciji ispisati ASCII kod ucitanog slova.

#include<stdio.h>

void ascii(char s);

int main() {

    int n, i;
	char slovo;

    printf("Upisi broj ucitavanja slova: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
	    printf("Upisi %d. slovo: ", i+1);
	    scanf(" %c", &slovo);

	    ascii(slovo);
    }

	return 0;

}

void ascii(char s) {

	printf("Slovo: %c, ASCII kod: %d\n", s, s);

	return;
}