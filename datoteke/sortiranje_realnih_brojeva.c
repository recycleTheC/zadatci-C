// (c) recycleTheC - TSRB 2019.
// Učitati 5 realnih brojeva u datoteku.
// Pročitati brojeve iz datoteke i sortirati ih od najmanjeg do najvećeg po znamenki stotnina.

#include<stdio.h>
#include<stdlib.h>

int main() {

	int i, j; float broj[100], dec[100], t;
	FILE* fp;

	fp = fopen("brojevi.txt", "w+");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &broj[i]);
		fwrite(&broj[i], sizeof(broj[i]), 1, fp);
	}

	for (i = 0; i < 5; i++) {
		fread(&broj[i], sizeof(broj[i]), 1, fp);
		dec[i] = broj[i] - (int)broj[i];
	}

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (dec[i] > dec[j]) {
				t = dec[i];
				dec[i] = dec[j];
				dec[j] = t;
				t = broj[i];
				broj[i] = broj[j];
				broj[j] = t;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		fwrite(&broj[i], sizeof(broj[i]), 1, fp);
	}

	fclose(fp);
    return 0;
}