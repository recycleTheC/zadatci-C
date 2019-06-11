# Funkcije

Funkcija je programska cjelina koja uzima neke ulazne podatke, izvršava
određen niz naredbi i vraća rezultat svog izvršavanja pozivnom programu.
Pomoću funkcija razbijamo složene programske zadaće na niz jednostavnijih cjelina. Time postižemo veću jasnoću programa i olakšavamo buduće
modifikacije. Svaka funkcija treba biti osmišljena tako da obavlja jednu dobro
definiranu zadaću te da korisnik funkcije ne mora poznavati detalje njene implementacije da bi ju koristio.

**Funkcija može vratiti aritmetički tip, strukturu, uniju ili pokazivač ali
ne može vratiti drugu funkciju ili polje.**

## Definicja funkcije

Definicija funkcija ima oblik:

```C

tip_podatka ime_funkcije(tip_1 argument_1, tip_n argument_n);

```

gdje je tip podatka tip podatka koji će funkcija vratiti kao rezultat svog izvršavanja.
Unutar zagrada nalazi se deklaracija formalnih argumenata funkcije.
Prvi argument argument_1 je varijabla tipa tip_1 itd. Deklaracije pojedinih argumenata medusobno se odvajaju zarezom.

Ako funkcija ne vraća ništa u program iz kojeg je pozvana, može se koristiti ```C void``` tip podataka.

## Pozivanje funkcija

```C
int main(){

    poziv_funkcije(argumnet);

}
```

Izvor: [Programski jezik C, M. Jurak](https://web.math.pmf.unizg.hr/~singer/Prog_Add/c.pdf)