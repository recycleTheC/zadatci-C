// (c) recycleTheC - TSRB 2019.
// Upisati ukupno 5 cijelih i relanih brojeva u niz i u funkciji sortirati brojeve
// metodom razmjene od najmanjeg do najvećeg.

#include<stdio.h>

void sort(float *broj);

int main(){

    int i;
    float broj[5], *pokBr;

    pokBr=&broj[0];

    for(i=0;i<5;i++){
        printf("Upisi %d. broj: ", i+1);
        scanf("%f", (pokBr + i));
    }

    sort(pokBr);

    return 0;

}

void sort(float *broj){

    int i, j;
    float temp;

    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(*(broj+i) > *(broj+j)){
                temp=*(broj+i);
                *(broj+i)=*(broj+j);
                *(broj+j)=temp;
            }
        }
    }

    printf("Brojevi sortirani od najmanjeg do najveceg: ");

    for(i=0;i<5;i++){
        printf("%f ", *(broj+i));
    }

    printf("\n");

    return;

}