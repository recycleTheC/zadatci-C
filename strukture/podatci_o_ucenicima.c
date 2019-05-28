// (c) recycleTheC - TSRB 2019.
// Učitati u niz strukturnog tipa prezimena i broj bodova
// za pet učenika. Ispisati podatke o učenicima poredane
// po prezimanima od A do Z.

#include<stdio.h>
#include<string.h>

struct ucenici{
    char prezime[25];
    int bodovi;
};

int main(){

    int i, j;
    struct ucenici uc[5], temp;

    for(i=0;i<5;i++){
        printf("Upisi prezime i broj bodova za %d. ucenika: ", i+1);
        scanf("%s %d", uc[i].prezime, &uc[i].bodovi); // Ograničenje: moguće je upisati samo prezime sastavljeno od jedne rijeci
    }

    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(uc[i].prezime, uc[j].prezime)==1){
                temp=uc[i];
                uc[i]=uc[j];
                uc[j]=temp;
            }
        }
    }

    printf("Sortirani podatci o ucenicima: \n");

    for(i=0;i<5;i++){
        printf("%s %d\n", uc[i].prezime, uc[i].bodovi);
    }

    return 0;
}