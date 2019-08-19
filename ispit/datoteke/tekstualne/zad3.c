// (c) recycleTheC - TSRB 2019.
// U datoteku upisati naziv i prosječnu temperaturu za 5 gradova.
// Pročitati podatke iz datoteke i izračunati prosjek temperatura za sve gradove.
// U novoj datoteci upisati tu temperatutu i sve gradove čija je tempreatura veća od prosječne u obliku kratkog izvještaja:
// 
// ***Sadržaj datoteke***
//
// Izvjestaj o temperaturama
//
// Prosjecna temperatura: %.2f°C
// 
// Gradovi s prosjecnom temperatorm vecom od prosjecne: 
// <grad1> <temp1>
// <grad2> <temp2>
//
// *** Sadržaj datoteke ***

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct gradovi {
	char naziv[50];
	float temp;
};

int main() {

	int i; float zbr = 0, prosjecnaTemp=0;
	struct gradovi grad[5];
	FILE* fp;

	fp = fopen("temperature.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("Upisi naziv i prosjecnu temperatutu za %d. grad: ", i + 1);
		scanf("%s %f", grad[i].naziv, &grad[i].temp);
		fprintf(fp, "%s %f\n", grad[i].naziv, grad[i].temp);
	}

	fclose(fp);

	fp = fopen("temperature.txt", "r");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		fscanf(fp, "%s %f\n", grad[i].naziv, &grad[i].temp);
		zbr = zbr + grad[i].temp;
	}

	fclose(fp);

	if (zbr != 0) {
		prosjecnaTemp = zbr / 5;
	}

	fp = fopen("izvjestaj.txt", "w");

	if (fp == NULL) {
		printf("Greska pri otvaranju datoteke!\n");
		exit(1);
	}

	fprintf(fp, "Izvjestaj o temperaturama\n\n");
	fprintf(fp, "Prosjecna temperatura: %.2f°C\n\n", prosjecnaTemp);
	fprintf(fp, "Gradovi s prosjecnom temperatorm vecom od prosjecne:\n");

	for (i = 0; i < 5; i++) {
		if (grad[i].temp > prosjecnaTemp) {
			fprintf(fp, "%s %.2f°C\n", grad[i].naziv, grad[i].temp);
		}
	}

	printf("Izvjestaj uspjesno kreiran!\n");

	fclose(fp);

	return 0;
}