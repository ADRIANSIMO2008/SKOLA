#include <stdio.h>
int main()
{
    float num,km;
    int  mm,cm,dm;

    //VSTUP

    printf ("ZADAJTE CISLO V METROCH: ");
    scanf ("%f", &num);

    //VYPOCET

    km = num / 1000;
    cm = num * 100;

    //VYSTUP

    printf ("ZADALI STE HODNOTU: %.0f \n",num);
    printf ("TATO HODNOTA JE V CM: %d \n", cm);
    printf ("TATO HODNOTA JE V KM: %.3f \n", km);

    return 0;
    }
