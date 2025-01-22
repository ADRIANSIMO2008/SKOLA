#include <stdio.h>

int main()
{
    int EUR,PERCENTO;
    float CZK,NOVACENA;
    printf ("ZADAJTE SUMU V EUR: ");
    scanf ("%d", &EUR);
    printf ("ZADAJTE PERCENTO NAVYSENIA: ");
    scanf ("%d", &PERCENTO);
    NOVACENA = EUR + EUR * PERCENTO / 100;
    printf ("%.2f",NOVACENA);
    return 0;
    }
