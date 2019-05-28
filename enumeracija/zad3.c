// (c) recycleTheC - TSRB 2019.
// Za 6 osobâ učitati u polje strukturâ ime, prezime, starost i spol. Spol (muški, ženski,
// ostalo) enumerirati i definirati kao član strukture. Zatražiti od korisnika odabir spola i
// ispisati podatke o svim osobama sa tim spolom.

#include<stdio.h>

enum _spol{
    Muski=1,
    Zenski,
    Ostalo
};

struct osobe{
    char ime[25], prezime[25];
    int starost;
    enum _spol spol;
};

int main(){

    int i;
    struct osobe os[6]; enum _spol sel;

    for(i=0;i<6;i++){
        printf("Upisi ime, prezime i starost za %d. osobu: ", i+1);
        scanf("%s %s %d", os[i].ime, os[i].prezime, &os[i].starost);
        printf("Upisi spol %d. osobe:\n", i+1);
        printf("1 - muski\n");
        printf("2 - zenski\n");
        printf("3 - ostalo\n: ");
        scanf("%d", &os[i].spol);
        printf("\n");
    }

    printf("Upisi spol za sortiranje podataka:\n");
    printf("1 - muski\n");
    printf("2 - zenski\n");
    printf("3 - ostalo\n: ");
    scanf("%d", &sel);

    switch (sel){
    default: printf("Nije upisan ispravan spol!\n"); break;

    case Muski:
        printf("Osobe muskog spola: \n");
        for(i=0;i<6;i++){
            if(os[i].spol==Muski){
                printf("%s %s %d\n", os[i].ime, os[i].prezime, os[i].starost);
            }
        }
        break;

    case Zenski:
        printf("Osobe zenskog spola: \n");
        for(i=0;i<6;i++){
            if(os[i].spol==Zenski){
                printf("%s %s %d\n", os[i].ime, os[i].prezime, os[i].starost);
            }
        }
        break;
        
    case Ostalo:
        printf("Osobe koje ne navode svoj spol (ostalo): \n");
        for(i=0;i<6;i++){
            if(os[i].spol==Ostalo){
                printf("%s %s %d\n", os[i].ime, os[i].prezime, os[i].starost);
            }
        }
        break;
    }

    return 0;
}