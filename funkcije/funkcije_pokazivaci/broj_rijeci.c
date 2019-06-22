// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i u funkciji izbrojati broj riječi u rečenici!

#include<stdio.h>
#include<string.h>

int brojRijeci(char *pokR);

int main(){

    char r[255], *pok=&r[0];
    int n;

    printf("Upisi recenicu: ");
    gets(pok);

    n=brojRijeci(pok);

    printf("Broj rijeci u recenici: %d\n", n);

    return 0;
}

int brojRijeci(char *pokR){

    int d, n=0, i;

    d=strlen(pokR);

    for(i=0;i<=d;i++){
        if(*(pokR+i)==' ' || *(pokR+i)=='\0'){
            n++;
        }
    }

    return n;
}