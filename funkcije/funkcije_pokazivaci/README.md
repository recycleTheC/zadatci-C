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

Primjer korištenja pokazivača u funkcijama:

```C

void zamjena(int *px, int *py) {

    int temp=*px;
    *px=*py; // * označava vrijednost -> vrijednost varijable na adresi u pokazivaču py će biti pohranjena u varijablu na adresi u pokazivaču px
    *py=temp;

}

```

Izvor: [Programski jezik C, M. Jurak](https://web.math.pmf.unizg.hr/~singer/Prog_Add/c.pdf)