// (c) recycleTheC - TSRB 2019.
// Učitati broj i ispisati je li njegov n-ti bit u jedinici.

#include<stdio.h>

int main(){

    int broj, n, mask;

    printf("Upisi broj: ");
    scanf("%d", &broj);

    printf("Upisi mjesto bita: ");
    scanf("%d", &n);

    mask=1<<n;

    printf("%d. bit broja %d ", n, broj);

    if(mask&broj){
        printf("je u jedinici\n");
    }
    else{
        printf("nije u jedinici\n");
    }

    return 0;
}