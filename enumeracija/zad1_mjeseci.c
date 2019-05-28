// (c) recycleTheC - TSRB 2019.
// Enumerirati mjesece u godini. Zatražiti od korisnika upis jednog mjeseca
// (broj od 1 do 12) i ispisati naziv mjeseca i broj dana u izabranom mjesecu.

#include<stdio.h>

enum mjeseci{
    Sijecanj=1,
    Veljaca,
    Ozujak,
    Travanj,
    Svibanj,
    Lipanj,
    Srpanj,
    Kolovoz,
    Rujan,
    Listopad,
    Studeni,
    Prosinac
};

int main(){

    enum mjeseci sel;

    printf("Upisi broj mjeseca u godini: ");
    scanf("%d", &sel);

    switch(sel){
        default: printf("Nije upisan ispravan broj mjeseca!\n"); break;
        case Sijecanj: printf("Mjesec: sijecanj, 31 dan\n"); break;
        case Veljaca: printf("Mjesec: veljaca, 28 dana\n"); break;
        case Ozujak: printf("Mjesec: ozujak, 31 dan\n"); break;
        case Travanj: printf("Mjesec: travanj, 30 dana\n"); break;
        case Svibanj: printf("Mjesec: svibanj, 31 dan\n"); break;
        case Lipanj: printf("Mjesec: lipanj, 30 dana\n"); break;
        case Srpanj: printf("Mjesec: srpanj, 31 dan\n"); break;
        case Kolovoz: printf("Mjesec: kolovoz, 31 dan\n"); break;
        case Rujan: printf("Mjesec: rujan, 30 dana\n"); break;
        case Listopad: printf("Mjesec: listopad, 31 dan\n"); break;
        case Studeni: printf("Mjesec: studeni, 30 dana\n"); break;
        case Prosinac: printf("Mjesec: prosinac, 31 dan\n"); break;
    }

    return 0;

}