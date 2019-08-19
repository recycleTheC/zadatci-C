// (c) recycleTheC - TSRB 2019.
// Učitati ime, prezime i broj bodova za 5 ucenika i upisati ih u datoteku.
// Pročitati podatke iz datoteke i sortirani ih po broju bodova (od najvećeg do najmanjeg).
// Sortirane podatke upisati u datoteku.

#include<stdio.h>
#include<stdlib.h>

struct ucenici {
	char ime[10];
	char prezime[10];
	int bodovi;
};

int main() {

	int i, j;
	struct ucenici uc[5], temp;
	FILE* fp;

	fp = fopen("ucenici.bin", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi ime, prezime i broj bodova za %d. ucenika: ", i + 1);
		scanf("%s %s %d", uc[i].ime, uc[i].prezime, &uc[i].bodovi);
		fwrite(&uc[i], sizeof(struct ucenici), 1, fp);
	}

	fseek(fp, 0, SEEK_SET);

	for (i = 0; i < 5; i++) {
		fread(&uc[i], sizeof(struct ucenici), 1, fp);
	}

	fseek(fp, 0, SEEK_SET);

	for (i = 0; i < 5-1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (uc[i].bodovi < uc[j].bodovi) {
				temp = uc[i];
				uc[i] = uc[j];
				uc[j] = temp;
			}
		}
	}

	printf("Rang lista ucenika:\n");

	for (i = 0; i < 5; i++) {
		fwrite(&uc[i], sizeof(struct ucenici), 1, fp);
		printf("%s %s %d\n", uc[i].ime, uc[i].prezime, uc[i].bodovi);
	}

	fclose(fp);

	return 0;
}