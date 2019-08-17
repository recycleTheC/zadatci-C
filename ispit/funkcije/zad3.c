// (c) recycleTheC - TSRB 2019.
// Učitati rečenicu i pomoću funkcije mala slova u rečenici zamjeniti velikima i obrnuto.
// Nije dozvoljeno korištenje pokazivača!

#include<stdio.h>
#include<string.h>

int zamjena(char s);

int main(){

    int i, d, rez;
    char r[100];

    printf("Upisi recenicu: ");
    gets(r);

    d=strlen(r);

    for(i=0;i<d;i++){
        rez=zamjena(r[i]);

        if(rez==-1){
            r[i]=r[i]-32;
        }
        else if(rez==1){
            r[i]=r[i]+32;
        }
    }

    printf("Recenica nakon zamjene slova: %s\n", r);

    return 0;
}

int zamjena(char s){

    if(s>='A' && s<='Z'){
        return 1; // upisano je veliko slovo
    }

    if(s>='a' && s<='z'){
        return -1; // upisano je malo slovo
    }

}