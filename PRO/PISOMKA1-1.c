#include <stdio.h>
int main()
{
    int pocet1, pocet2, pocet3, peto, mar;

    //VSTUP

    printf ("ZADAJTE POCET GULOCOK (ZADAJTE CISLA TAKTO: 5 7 10): ");
    scanf ("%d %d %d", &pocet1, &pocet2, &pocet3);

    //VYPOCET

    mar = pocet1 + pocet2;
    peto = pocet1 + pocet1+ pocet2 + pocet3;

    //VYSTUP

    printf (" Jurko ma %d gulocok.\n",pocet1);
    printf (" Marienka ma %d gulocok.\n",mar);
    printf (" Peto ma %d gulocok.\n",peto);
    return 0;
    }