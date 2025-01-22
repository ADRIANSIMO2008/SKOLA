#include <stdio.h>
#define PI 3.14159

int main()
{
    float vys,vys2;
    int r;

    //VSTUP
    printf ("ZADAJ POLOMER: ");
    scanf ("%d", &r);

    //VYPOCET
    vys = 4 * PI * r * r;
    vys2 = 4 * PI * r * r * r / 3;

    //VYSTUP
    printf ("Povrch je %.2f a objem je %.2f",vys,vys2);
    return 0;
    }
