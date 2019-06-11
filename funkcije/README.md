# Funkcije

Funkcija je programska cjelina koja uzima neke ulazne podatke, izvršava
određen niz naredbi i vraća rezultat svog izvršavanja pozivnom programu.
Pomoću funkcija razbijamo složene programske zadaće na niz jednostavnijih cjelina. Time postižemo veću jasnoću programa i olakšavamo buduće
modifikacije. Svaka funkcija treba biti osmišljena tako da obavlja jednu dobro
definiranu zadaću te da korisnik funkcije ne mora poznavati detalje njene implementacije da bi ju koristio.

**Funkcija može vratiti aritmetički tip, strukturu, uniju ili pokazivač ali
ne može vratiti drugu funkciju ili polje.**

## Definicja i deklaracija funkcije

Funkcije se deklariraju **na početku programa**, prije deklariranja funkcije main().

Deklaracija funkcije ima oblik:

```C

tip_podatka ime_funkcije(tip_1 argument_1, tip_n argument_n);

```

gdje je tip podatka tip podatka koji će funkcija vratiti kao rezultat svog izvršavanja.
Unutar zagrada nalazi se deklaracija formalnih argumenata funkcije.
Prvi argument argument_1 je varijabla tipa tip_1 itd. Deklaracije pojedinih argumenata medusobno se odvajaju zarezom.

Ako funkcija ne vraća ništa u program iz kojeg je pozvana, može se koristiti `void` tip podataka.

Nakon što se funkcija deklarira na početku programa, potrebno je definirati njezino *tijelo*, odnosno *kod* koji će se izvršiti prilikom poziva funkcije:

```C

void funkcija(int x, int y){

    int zbroj;

    zbroj=x+y;

    printf("Zbroj brojeva; %d\n", zbroj);

}

```

Ova funkcija je ``void`` tipa i ništa neće vratiti u program iz kojeg je pozvana.
Ako želimo rezultat vratiti u program iz kojeg je funkcija pozvana, *tijelo* funkcije definirat ćemo ovako:

```C

int funkcija(int x, int y){

    int zbroj;

    zbroj=x+y;

    return zbroj;

}

```

## Pozivanje funkcija

Funkcije se u programu pmogu pozvati na više različitih načina:

Funkcija `void` tipa:

```C
int main(){

    naziv_funkcije(argument);

}
```

Funkcija tipa različitog od `void` tipa, npr. `int`:

```C
int main(){

    int rez;

    rez=naziv_funkcije(argument);  // Rezultat funkcije sprema se u varijablu

}
```

```C
int main(){

    printf("Rezultat: %d\n", naziv_funkcije(argument));

}
```

## Prijenos i manipulacija argumentima

Argumenti deklarirani u definiciji funkcije nazivaju se formalni argumenti.
Izrazi koji se pri pozivu funkcije nalaze na mjestima formalnih argumenata
nazivaju se stvarni argumenti.
Prilikom poziva funkcije stvarni argumenti se izračunavaju (ako su izrazi)
i kopiraju u formalne argumente. **Funkcija prima kopije stvarnih argumenata
što znači da ne može izmijeniti stvarne argumente.** Zbog toga se u funkcijama koriste **pokazivači**. 

Sljedeći primjer ilustrira način prijenosa argumenata:

```C
#include <stdio.h>

void f(int x);

int main(){

    int x=5;

    printf("Izvan funkcije x=%d\n",x);

    f(x);

    printf("Nakon poziva funkcije x=%d\n",x);

    return 0;
}

void f(int x){

x=x+1;
printf("Unutar funkcije x=%d\n",x);

}

```

Rezultat izvršavanja programa će biti:

```
Izvan funkcije x=5
Unutar funkcije x=6
Nakon poziva funkcije x=5

```

Za detaljnije pojašnjenje funkcija pročitati izvor ili pogledati zadatke!

Izvor: [Programski jezik C, M. Jurak](https://web.math.pmf.unizg.hr/~singer/Prog_Add/c.pdf)