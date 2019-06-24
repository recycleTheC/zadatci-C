// (c) recycleTheC - TSRB 2019.
// Napisati funkciju koja uzima niz znakova i u njemu nalazi prvi samoglasnik.
// Funkcija treba vratiti nađeni samoglasnik i mjesto u nizu na kojem je nađen.
// Ukoliko u danom nizu nema samoglasnika, umjesto mjesta u nizu vraća se -1.
// U ovom primjeru funkcija mora vratiti dvije vrijednosti. Kroz return
// naredbu može se vratiti samo jedna vrijednost, tako da se druga mora vratiti kroz argument funkcije.
// (Funkcija ne može vratiti polje.)

#include<stdio.h>
#include<string.h>

int trazi(char linija[], char *psamoglasnik);

int main(){

    char r[255];
    char znak;
    int no;

    printf("Upisi rijec: ");
    scanf("%s", r);
    
    no=trazi(r,&znak);

    if(no != -1){
    printf("Prvi samoglasnik = %c\n",znak);
    printf("Nalazi se na mjestu %d\n",no);
    }
    else printf("Nema samoglasnika.\n");

    return 0;
}

// Funkcija trazi() uzima niz znakova linija, i pokazivač na varijablu tipa char, koji smo nazvali psamoglasnik (pointer na samoglasnik).
// Nađeni samoglasnik će biti vraćen kroz argument psamoglasnik, a mjesto na koje je nađen vraća se kroz naredbu return.

int trazi(char linija[], char *psamoglasnik){

    int i, n;
    char c;

    n=strlen(linija);

    for(i=0; i<n; i++){ // prolaz kroz sve znakove u polju
        c=linija[i]; // znak na položaju [i] iz polja se kopira u varijablu
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ // je li znak samoglasnik?
            *psamoglasnik=c; // ako je znak samoglasnik, on se kopira u varijablu na koju pokazuje pokazivač psamoglasnik
            return i + 1; // funkcija vraća položaj znaka koji je dan varijablom i
        }
    }
    
    return -1; // ukoliko je for petlja izvršena i nije ponađen samoglasnik, vraća se -1, a lokacija na koju pokazuje pokazivač psamoglasnik se ne mijenja
}