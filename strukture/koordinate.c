// (c) recycleTheC - TSRB 2019.
// Učitati u niz strukturnog tipa koordinate x i y
// za 5 točaka i ispisati koordinate točke koja je najviše udaljena od ishodišta.

#include<stdio.h>
#include<math.h>

struct koordinate
{
    int x, y;
    float d;
};

int main(){

    int i;
    struct koordinate k[5], max;

    for(i=0;i<5;i++){
        printf("Upisi koordinate %d. tocke (x,y): ", i+1);
        scanf("%d,%d", &k[i].x, &k[i].y);
        k[i].d=sqrt(pow(k[i].x,2) + pow(k[i].y,2));
    }

    max=k[0];

    for(i=1;i<5;i++){
        if(k[i].d>max.d){
            max=k[i];
        }
    }

    printf("Tocka koja je najudaljenija od ishodista: (%d,%d)\n", max.x, max.y);

    return 0;

}