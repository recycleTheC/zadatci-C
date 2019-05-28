// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i upisati je u datoteku. Pročitati rečenicu iz
// datoteke od zadnjeg znaka i svako malo slovo zamijeniti velikim i obratno.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	FILE* fp;
	char r[255];
	int i, d;

	fp = fopen("recenica.bin", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	printf("Upisi recenicu: ");
	gets(r);

	d = strlen(r);

	for (i = 0; i < d; i++) {
		fwrite(r, sizeof(r), 1, fp);
	}

	fclose(fp);

	fp = fopen("recenica.bin", "r+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < d; i++) {
		fseek(fp, -i * sizeof(r), SEEK_END);
		fread(r, sizeof(r), 1, fp);
	}

	fclose(fp);

	for (i = 0; i < d; i++) {
		if (r[i] >= 'a' && r[i] <= 'z') {
			r[i] = r[i] - 32;
		}
		else if (r[i] >= 'A' && r[i] <= 'Z') {
			r[i] = r[i] + 32;
		}
	}

	printf("Recenica nakon zamjene znakova: \n");
	printf("%s\n", r);

	return 0;

}