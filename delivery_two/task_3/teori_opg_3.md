# Oppgave 3 - teorioppgave
Finn ting som kan gå galt i følgende programbit:

### Kodeeksempel
`char text[5];
char *pointer = text;
char search_for = 'e';
cin >> text;
while (*pointer != search_for) {
  *pointer = search_for;
  pointer++;
}`

 - 1. Variabelen `tekst` settes til å ha en lengde på 5. Det er brukerinput som gir teksten av denne variabelen, slik at man kan ende opp med å ikke få med alle tegnene som brukeren skriver inn. Eventuelt også at det oppstår uønsket oppførsel i programmet grunnet dette ettersom det ikke gjøres noen sjekk på lengden til teksten brukeren har skrevet før den settes til variabelen. Det kan gi buffer overflow som kan overskrive andre data i minnet.
 
  - 2. Logikken med at while-løkken skal brukes til å iterere over `tekst` fungerer dårlig:
  
La oss si brukeren taster inn ordet `tar`.
Da vil første iterasjon av while-loopen sikte til å iterere gjennom ordet til det finner en `e`. Problemet er at i første iterasjon settes verdien pekeren peker til (`t`) til `e` og ordet `tar` endres til `ear`. Dette skjer helt til ordet er `eeee` (fire ettersom `\0` også endres).

 - 3. While-løkken sjekker ikke etter det siste tegnet i en tekst. Dette kan gjøre at løkken fortsetter inn i et uønsket minneområde om `e` ikke fins i teksten.

 - 4. Etter pekeren er satt til character `search_for` blir den satt til å bli inkrementert med 1. Dette er et problem ettersom `search_for` kun har 1 character. Dette hadde imidlertid gått fint om pekeren forble `tekst`-tabellen. 
