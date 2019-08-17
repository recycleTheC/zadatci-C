// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i još jedno slovo. U funkciji ispisati 
// sve riječi koje započinju tim slovom i u istom retku ispisati duljinu svake riječi.

#include<stdio.h>
#include<string.h>

void rijeciNaSlovo(char* pokR, char slovo);

int main() {

	char recenica[255], * pokRec = &recenica[0], dodatnoSlovo;

	printf("Upisi recenicu: ");
	gets(pokRec);

	printf("Upisi slovo za ispisivanje: ");
	scanf(" %c", &dodatnoSlovo);

	rijeciNaSlovo(pokRec, dodatnoSlovo);

	return 0;
}

void rijeciNaSlovo(char* pokR, char slovo) {

	int i, d;
	int n = 0; // brojač riječi
	int m = 0; // brojač slova

	d = strlen(pokR);

	for (i = 0; i < d; i++) {
		if (*(pokR + i) == slovo && (*(pokR + i - 1) == ' ' || i == 0)) {
			n++; // povećanje vrijednosti brojača riječi za 1; riječ počinje na učitano slovo
			printf("%d. rijec: ", n);
			for (i; i < d && *(pokR + i) != ' '; i++) {
				printf("%c", *(pokR + i)); // ispis riječi slovo po slovo
				m++; // povećanje vrijednosti brojača slova u riječi za 1
			}
			printf(", duljina: %d znakova\n", m);
		}
		m = 0; // brojač slova se ponovno postavlja u 0 nakon što je ispisana riječ
	}

	if (n == 0) { // ako je n == 0, u rečenici ne postoji riječ koja počinje učitanim slovom
		printf("U recenici se ne pojavljuju rijeci koje zapocinju slovom '%c'\n", slovo);
	}

	return;
}