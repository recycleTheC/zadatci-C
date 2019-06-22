// (c) recycleTheC - TSRB 2019.
// Učitati n brojeva i u funkciji ispitati koji broj je najveći.

#include<stdio.h>

int najveciBroj(int *pokX, int n);

int main(){

    int i, n, broj[255], *pokBr=&broj[0], max;

    printf("Upisi broj upisa (<=255): ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Upisi %d. broj: ", i+1);
        scanf("%d", (pokBr+i));
    }

    max=najveciBroj(pokBr, n);

    printf("Najveci broj iz niza: %d\n", max);

    return 0;

}

int najveciBroj(int *pokX, int n){

    int max, i;

    max=*pokX;

    for(i=1;i<n;i++){
        if(*(pokX+i)>max){
            max=*(pokX+i);
        }
    }

    return max;
}