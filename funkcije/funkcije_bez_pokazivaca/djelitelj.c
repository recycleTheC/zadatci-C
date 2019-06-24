// (c) recycleTheC - TSRB 2019.
// Učitati 2 broja i u funkciji izračunati njihov najveći zajednički djelitelj.

#include<stdio.h>

int djelitelj(int x, int y);

int main(){

    int a, b, rez;

    printf("Upisi prvi broj: ");
    scanf("%d", &a);

    printf("Upisi drugi broj: ");
    scanf("%d", &b);

    rez=djelitelj(a,b);

    printf("Najveci zajednicki djelitelj: %d\n", rez);

    return 0;
}

int djelitelj(int x, int y){

    int dj=0, i;

    for(i=1; i <= x && i <= y; i++){ // vrijednost i se povećava dok je manja od učitanih brojeva (zajednički djelitelj ne može biti veći od njih)
        if(x%i==0 && y%i==0){ // ako su učitani brojevi djeljivi sa i
            dj = i; // djelitelj dobiva vrijednost i
        }
    }

    return dj; // funckija vraća vrijednost najvećeg zajedničkog djelitelja
}