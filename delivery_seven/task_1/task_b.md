# Teori: Forklar hvordan 5 - 3 - fraction1 - 7 - fraction2 blir tolket. Hvilke versjoner av operatoren - blir brukt?

## Svar: 

Løsningen er i henhold til presedens og assosiativitet for minus-opertoren i cpp.


"These binary operators [+ and - operators] have left-to-right associativity." - K1)

Ettersom assosiativiteten er venstre-til-høyre, gjelder dette for uttrykket "5 - 3 - fraction1 - 7 - fraction2", slik at regneoperasjonene skjer i følgende rekkefølge: 


### Eksempel
(La oss si at fraction1 er 1/1 og fraction2 er 2/1)

Skrevet etter stegene (likhetstegn er matematisk, ikke programmatisk):

  a.  5 - 3 = 2

  b.  2 - fraction1 = 1/1

  c.  1/1 - 7 = -6/1

  d.  -6/1 - fraction2 = -8/1

Eller skrevet etter parentesregler: 

`((((5 - 3) - fraction1) - 7) - fraction2)`

Som blir `-8/1`

I steg `a` brukes forhåndsdefinert `-` operator for heltallsverdier.

I steg `b` brukes metode med følgende signatur: `Fraction operator-(int integer, const Fraction &other);`. Denne ble definert i oppgave a)

I steg `c` brukes metoden med følgende signatur: `Fraction operator-(int integer) const;`. Denne ble også definert i oppgave a). Den brukes siden resultatet i steg `b` er et objekt av klassen `Fraction`.

I steg `d` brukes metoden med følgende signatur: `Fraction operator-(const Fraction &other) const;`. Den brukes siden begge operander er objekter av klassen `Fraction`.

Resultatet er et nytt objekt av klassen `Fraction`. I eksempelet hadde dette objektet etter operasjonene `numerator = -8` og `denominator = 1`. 

#### Kilder: 

K1): 
https://learn.microsoft.com/en-us/cpp/cpp/additive-operators-plus-and?view=msvc-170
K2):
https://learn.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170  , 02.10.2023

