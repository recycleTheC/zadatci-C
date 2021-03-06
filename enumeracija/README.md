## Enumeracije

Pomoću enumeracije deklariramo simbolička imena koja primaju cjelobrojne vrijednosti i čija je osnovna svrha
povećanje čitljivosti programa.

Enumeraciji se dodjeljuje ime i tada je moguće deklarirati vartijable tipa enumeracije.
To su varijable koje primaju samo konačno mnogo vrijednosti navedenih u enumeraciji. 

Deklaracija enumeracije:

```C

enum boolean {
    FALSE,
    TRUE
};

```

Definiranje varijabli tipa `boolean`:

```C

enum boolean x,y;

```

Općenito se enumeracija deklarira naredbom
```C
enum ime_enumeracije {
    clan_1,
    clan_2,
    clan_n
};

```

gdje je `ime_enumeracije` ime koje dajemo enumeraciji, a `clan_1`, `clan_2`, ...., `clan_n`
predstavljaju identifikatore koji se mogu pridružiti varijabli tipa `enum` `ime_enumeracije`.

Identifikatorima se automatski pridružuju cjelobrojne vrijednosti:

```C

clan_1=0
clan_2=1
clan_3=2
clan_n=n-1

```

Identifikatorima je moguće dodijeliti i drugačije cjelobrojne vrijednosti:

```C
enum ime_enumeracije {
    clan_1=1,
    clan_2, //sljedeći identifikator ima cjelobrojnu vrijednost veću za 1 (2)
    clan_n
};

```

Za detaljnije pojašnjenje enumeracija pročitati izvor ili pogledati zadatke!

Izvor: [Programski jezik C, M. Jurak](https://web.math.pmf.unizg.hr/~singer/Prog_Add/c.pdf)