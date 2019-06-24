# Pokazivači

Svaka varijabla deklarirana u C programu ima svoju adresu koju
je moguće dohvatiti pomoću **adresnog operatora &**.

``` C

#include <stdio.h>

int main() {

    float x = 5;

    printf("x = %f, adresa od x= %p\n",x,&x);

    return 0;
}

```

Program će ovisno o računalu na kojem se izvodi ispisati nešto kao:

```
x = 5.000000, adresa od x= 0x7ffce33f4c5c
```

Adresa varijable `x` ispisana je heksabecimalno; znak konverzije `%p` služi za ispis adresa.

Adresu varijable nekog tipa možemo zapamtit u varijabli koja je tipa pokazivač na dani `tip`.

``` C

#include<stdio.h>

int main(){

    float x=5;
    float *px;

    px=&x;

    printf("x = %f, adresa od x= %p\n", x, px);

    return 0;
}

```

Ovaj program daje jednak rezultat kao i prethodni.

Deklaracija `float *px` definira varijablu `px` kao pokazivač na tip `float`. Zvjezdica (*) prije imena varijable govori da se ne radi o varijabli tipa `float` nego o pokazivaču na tip `float`. 

ZAPAMTITI: **Pokazivač na određeni tip može sadržavati adrese varijabli tog tipa!**

U naredbi `px=&x` u varijablu `px` smješta se adresa varijable `x`.

Vrijednost na koju pokazivač pokazuje možemo dohvatiti putem **operatora dereferenciranja *.

``` C

#include <stdio.h>

int main() {

    float x=5;
    float *px;

    px=&x;

    printf("x = %f, adresa od x= %p\n",*px,px);
    return 0;
}

```

`*` ima različito značenje u deklaraciji i u izvršnoj naredbi. U deklaraciji varijable ukazuje da je varijabla tipa pokazivač na dani tip.
U izvršnoj naredbi ona predstavlja operator diferenciranja.

Detaljno opisani primjer korištenja pokazivača: [samoglasnik.c](samoglasnik.c)

## Deklaracija pokazivača

Pokazivač na neki `tip` deklarira se na slijedeći način:

``` C

tip *pokazivac;

```

gdje je `pokazivac` ime pokazivača, a `tip` je tip podataka na koji taj pokazivač pokazuje.
Zvjezdica označava da se radi o pokazivaču, a ne o varijabli tipa `tip`. 

Da bi se dohvatila adresa neke varijable koristi se *adresni operator* `&`.
Ako je `variable` varijabla danog tipa, a `pok` pokazivač na taj tip, onda je naredbom

```C

pok=&variable;

```

pokazivaču `pok` pridružena adresa varijable `variable`.

Korištenje pokazivača u funkcijama:

```C

void zamjena(int *px, int *py) {

    int temp=*px;
    *px=*py; // * označava vrijednost -> vrijednost varijable na adresi u pokazivaču py će biti pohranjena u varijablu na adresi u pokazivaču px
    *py=temp;

}

```

Korištenje pokazivača i polja:

```C

int brojevi[5], *pokBr, i;

pokBr=&brojevi[0]; // Pokazivač ima adresu prvog elementa polja

for(i=0;i<5;i++){
    printf("Upisi %d. broj: ", i+1);
    scanf("%d", (pokBr+i)); // Funkcija scanf() pohranit će učitani broj na adresi prvog elementa polja uvećanoj za i
}

printf("Ispis brojeva:\n");

for(i=0;i<5;i++){
    printf("%d\n", *(pokBr+i)); // Funkcija printf() ispisat će učitani broj sa adrese prvog elementa polja uvećanoj za i
}

```

Izvor: [Programski jezik C, M. Jurak](https://web.math.pmf.unizg.hr/~singer/Prog_Add/c.pdf)