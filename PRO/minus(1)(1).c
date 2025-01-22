#include <stdio.h>
int main()
{
    float vyscen, dph, cen;
    printf ("ZADAJTE CENU A DPH: ");
    scanf ("%f %f", &cen, &dph);
    vyscen = (cen / 100 * dph) + cen;
    printf ("CENA %.2f",vyscen);
    return 0;
    }
