// (c) recycleTheC - TSRB 2019.
// Učitavati riječi dok se ne upiše riječ "kraj". 
// Nakon toga izračunati prosječnu duljinu upisanih riječi i ispisati najdulju upisanu.

#include<stdio.h>
#include<string.h>

int main() {

	int d, maxD=0;
	int zbr = 0, n = 0; float arsr;
	char r[255], max[255];

	printf("Upisi rijec: ");
	gets(r);

	while(strcmp(r,"kraj")!=0 && strcmp(r, "KRAJ") != 0){
		
		d = strlen(r);
		n++;

		zbr = zbr + d;

		if (d > maxD) {
			maxD = d;
			strcpy(max, r);
		}
		printf("Upisi rijec: ");
		gets(r);
	}

	if (n != 0) {
		arsr = (float)zbr / n;
		printf("Prosjecna duljina upisanih rijeci: %f\n", arsr);
		printf("Najdulja upisana rijec: %s\n", max);
	}
	else {
		printf("Nije upisana niti jedna rijec!\n");
	}

	return 0;
}