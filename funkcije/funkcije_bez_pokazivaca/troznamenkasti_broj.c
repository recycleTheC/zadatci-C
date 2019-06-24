// (c) recycleTheC - TSRB 2019.
// Napravite program koji će od korisnika tražiti unošenje 4 troznamenkasta broja.
// U funkciji ispisati je li zbroj znamenki unesenog broja djeljiv s 3.
// Ako korisnik ne unese troznamenkasti broj program ga treba na to upozoriti.

#include<stdio.h>

void djeljivost(int x);

int main(){

    int i, broj;

    for(i=0;i<4;i++){
        printf("Upisi %d. troznamenkasti broj: ", i+1);
        scanf("%d", &broj);

        while(!(broj>99 && broj<1000)){ // ako korisnik ne upiše troznamenkasti broj, zatražiti ponovni upis
            printf("Ponovno upisi %d. troznamenkasti broj: ", i+1);
            scanf("%d", &broj);
        }

        djeljivost(broj);
    }

    return 0;
}

void djeljivost(int x){

    int s, d, j;

    s=x/100;
    d=x/10%10;
    j=x%10;

    printf("Broj %d ", x);

    if((s + d + j) % 3 == 0){
        printf("je ");
    }
    else{
        printf("nije ");
    }

    printf("djeljiv s tri!\n");
}