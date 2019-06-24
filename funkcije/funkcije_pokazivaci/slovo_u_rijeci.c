// (c) recycleTheC - TSRB 2019.
// Upisati riječ i nakon toga traženo slovo. U funciji ispitati
// metodom sekvencijskog pretraživanja pojavljuje li se traženo
// slovo u upisanoj riječi.

#include<stdio.h>
#include<string.h>

void pretraga(char *r, char s);

int main(){

    char rijec[255], *pokR, s;

    pokR=&rijec[0];

    printf("Upisi rijec: ");
    scanf("%s", pokR);

    printf("Upisi slovo za pretrazivanje: ");
    scanf(" %c", &s);

    pretraga(pokR, s);

    return 0;

}

void pretraga(char *r, char s){

    int d, stanje=0, i;

	d = strlen(r);

    for(i=0;i<d;i++){
		if (*(r + i) == s) {
            stanje++;
            break;
        }
    }

    printf("Slovo %c se ", s);

    if(stanje==0){printf("ne ");}

    printf("pojavljuje u upisanoj recenici\n");

    return;
}