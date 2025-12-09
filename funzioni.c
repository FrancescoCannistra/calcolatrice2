#include <stdio.h>
#include "funzioni.h"



int main() {
    char scelta;
    int ris;
    int risultato=0;
    int a;
    int b;
   
    printf("Scegli l'operazione:\n");
    printf("addizione = Q\nsottrazione = W\nmoltiplicazione = E\ndivisione = S\n");
    printf("Inserisci la tua scelta: ");
    scanf(" %c", &scelta); 
    
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    if (scelta == 'Q' || scelta == 'W' || scelta == 'E') {
        if (scelta == 'Q')
            risultato = addizione(a,b);
        else if (scelta == 'W')
            risultato = sottrazione(a,b);
        else if (scelta == 'E')
            risultato = moltiplicazione(a,b);


        printf("Risultato: %d\n", risultato);
    } 

    return 0;
}
