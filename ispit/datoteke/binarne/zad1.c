// (c) recycleTheC - TSRB 2019.
// Učitati 5 realnih brojeva i upisati ih u datoteku.
// Pročitati brojeve iz datoteke i u istoj datoteci ih zamijeniti njihovim cijelim dijelovima.
// Rezultat ispisati i u programu!

#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, cijeli;
	float broj[5];
	FILE* fp;

	fp = fopen("brojevi.bin", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &broj[i]);
		fwrite(&broj[i], sizeof(broj[i]), 1, fp);
	}

	fclose(fp);

	fp = fopen("brojevi.bin", "r");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fread(&broj[i], sizeof(broj[i]), 1, fp);
	}

	fclose(fp);

	fp = fopen("brojevi.bin", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	printf("Cijeli dijelovi upisanih brojeva: \n");

	for (i = 0; i < 5; i++) {
		cijeli = (int)broj[i];
		printf("%d\n", cijeli);
		fwrite(&cijeli, sizeof(cijeli), 1, fp);
	}

	fclose(fp);

	return 0;
}