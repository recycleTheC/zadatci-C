# Pokazivači

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