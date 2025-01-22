#include <stdio.h>

int main()
{
    float vys,r,d;

    //VSTUP
    printf ("ZADAJ PLAN A VYROBENE KS: ");
    scanf ("%d %d", &d, &r);

    //VYPOCET
    vys = r / d * 100;

    //VYSTUP
    printf ("Percentualna uspesnost je %.2f % ",vys);
    return 0;
    }
