// (c) recycleTheC - TSRB 2019.
// Učitati 5 riječi u datoteku. Pročitati riječi iz datoteke i ispisati ih od zadnje.

#include<stdio.h>
#include<stdlib.h>

int main() {

	int i;
	char rijec[255];
	FILE* fp;

	fp = fopen("rijeci.bin", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. rijec: ", i + 1);
		scanf("%s", rijec);
		fwrite(rijec, sizeof(rijec), 1, fp);
	}

	printf("Rijeci upisane u datoteku pocevsi od zadnje: \n");

	for (i = 0; i < 5; i++) {
		fseek(fp, -(i + 1) * sizeof(rijec), SEEK_END);
		fread(rijec, sizeof(rijec), 1, fp);
		printf("%s\n", rijec);
	}

	fclose(fp);

	return 0;
}