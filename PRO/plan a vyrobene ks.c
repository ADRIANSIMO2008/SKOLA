#include <stdio.h>

int main()
{
    float vys,r,d;

    //VSTUP
    printf ("ZADAJ PLAN KS: ");
    scanf ("%d", &d);
    printf ("ZADAJ VYROBENE KS: ");
    scanf ("%d", &r);

    //VYPOCET
    vys = r / d * 100;

    //VYSTUP
    printf ("Percentualna uspesnost je %.2f",vys);
    return 0;
    }
