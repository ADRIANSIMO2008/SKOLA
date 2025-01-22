#include <stdio.h>

int main()
{
    float NOVACENA,EUR,PERCENTO;

    //VSTUP

    printf ("ZADAJTE SUMU V EUR: ");
    scanf ("%f", &EUR);
    printf ("ZADAJTE PERCENTO ZLAVY: ");
    scanf ("%f", &PERCENTO);

    //VYPOCET

    NOVACENA = EUR - EUR * PERCENTO / 100;

    //VYSTUP

    printf ("NOVA CENA JE %.2f EUR",NOVACENA);
    return 0;
    }
