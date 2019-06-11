// (c) recycleTheC - TSRB 2019.
// (c) Mojwebdizajn.net 2012-2019
// Učitati broj. U funkciji izračunati njegov kub. Rezultat ispisati u glavnom programu!

#include<stdio.h>

int kub(int x); // Deklaracija funkcije

int main(){

    int a, k;

    printf("Upisi broj: ");
    scanf("%d", &a);

    k = kub(a); // Pozivanje funkcije i spremanje njezinog rezultata

    printf("Kub broja %d je %d\n", a, k);

    return 0;

}

int kub(int x){ // Definicija funkcije

    int rez;

    rez=x*x*x;

    return rez; // Funkcija vraća rezultat

}