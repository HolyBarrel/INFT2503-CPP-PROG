# Oppgave 2 - teorioppgave
Hva vil skje hvis du skriver:

### Kodeeksempel
`char *line = nullptr;   // eller char *line = 0;
strcpy(line, "Dette er en tekst");`

Ved å utføre strcpy()-funksjonen fra en streng til peker `line` som er nullptr eller 0 muliggjør man udefinert oppførsel av programmet ved kjøring.

Problemet oppstår dersom peker `line` gis som `destination`-parameter. Ettersom skriving til nullptr ulovlig, vil dette føre til en uønsket segmentation fault. Dette kan gjøre at programmet oppfører seg uønsket, for eksempel ved å krasje.

Dette er signaturen til strcpy:
char * strcpy ( char * destination, const char * source );

Kilde:
https://cplusplus.com/reference/cstring/strcpy/
