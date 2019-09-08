// (c) recycleTheC - TSRB 2019.
// Učitati 5 riječi u datoteku. Zatvoriti datoteku.
// Otvoriti datoteku za čitanje i korisnika tražiti upis dodatne riječi.
// Dodatno upisanu riječ potražiti u datoteci i ispisati koliko puta se pojavljuje.
// Rezultat također ispisati u datoteku 'rezultat.txt'.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	int i, n = 0;
	char rijec[255], dod[255];
	FILE* fp;

	fp = fopen("rijeci.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. rijec: ", i + 1);
		scanf("%s", rijec);
		fprintf(fp, "%s\n", rijec);
	}

	fclose(fp);

	fp = fopen("rijeci.txt", "r");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	printf("Upisi jos jednu rijec: ");
	scanf("%s", dod);

	for (i = 0; i < 5; i++) {
		fscanf(fp, "%s\n", &rijec);
		if (strcmp(rijec, dod) == 0) {
			n++;
		}
	}

	fclose(fp);

	fp = fopen("rezultat.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	printf("Rijec '%s' se ", dod);
	fprintf(fp, "Rijec '%s' se ", dod);

	if (n == 0) {
		printf("ne ");
		fprintf(fp, "ne ");
	}
	else {
		printf("%d puta ", n);
		fprintf(fp, "%d puta ", n);
	}

	printf("pojavljuje u datoteci!\n");
	fprintf(fp, "pojavljuje u datoteci!\n");

	fclose(fp);

	return 0;
}