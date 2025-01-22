#include <stdio.h>
int main()
{
    float num,km;
    int  mm,cm,dm;
    printf ("ZADAJTE CISLO V METROCH: ");
    scanf ("%f", &num);
    km = num / 1000;
    cm = num * 100;
    printf ("ZADALI STE HODNOTU: %.f \n",num);
    printf ("TATO HODNOTA JE V CM: %d \n", cm);
    printf ("TATO HODNOTA JE V KM: %.3f \n", km);

    return 0;
    }
