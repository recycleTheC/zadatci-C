# Rad s bitovima

Programski jezik C ima operatore čije je djelovanje definirano na bitovima. Takvi se operatori mogu primijeniti na cjelobrojne tipove
podataka `char`, `short`, `int` i `long`:

| Operator   | Značenje                   |
| ---------- | -------------------------- |
| &          | logičko I bit-po-bit       |
| \|         | logičko ILI bit-po-bit     |
| ^          | isključivo ILI bit-po-bit  |
| <<         | pomak bitova u lijevo      |
| >>         | pomak bitova u desno       |
| ~          | 1-komplement               |

Prve tri operacije `&`, `|` i `^` uzimaju dva operanda i vrše operacije na
bitovima koji se nalaze na odgovarajućim mjestima. Usporeduju se bitovi na
najmanje značajnom mjestu u oba operanda, zatim na sljedećem najmanje
značajnom mjestu... Definicije operacija dane su u sljedećoj tabeli:

| a | b | a & b | a ^ b | a \| b |
|:-:|:-:|:-----:|:-----:|:------:|
| 0 | 0 |   0   |   0   |   0    |
| 0 | 1 |   0   |   1   |   1    |
| 1 | 0 |   0   |   1   |   1    |
| 1 | 1 |   1   |   0   |   1    |


|----:|---|---------------------|
| a   | = | 0100 0111 0101 0111 |
| b   | = | 1101 0100 1010 1001 |
| a&b | = | 0100 0100 0000 0001 |