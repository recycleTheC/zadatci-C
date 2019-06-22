// (c) recycleTheC - TSRB 2019.
// Napravite program kojim će te učitati jedan cijeli broj pa
// ako je broj manji od 0 u funkciji ispisati njegov sljedbenik, a u protivnom njegov prethodnik.

#include<stdio.h>

void prethodnikSljedbenik(int x);

int main(){

    int broj;

    printf("Upisi broj: ");
    scanf("%d", &broj);

    prethodnikSljedbenik(broj);

    return 0;
}

void prethodnikSljedbenik(int x){

    if(x<0){
        printf("Sljedbenik broja %d je %d\n", x, x+1);
    }else{
        printf("Prethodnik broja %d je %d\n", x, x-1);
    }
}