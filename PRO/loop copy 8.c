#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vstup,vstp,a,b,c,d,max,min;
    float f,e,g;
    e = 0;
    f = 0;
    g = 0;
    max = 0;
    min = 99999;

    //VSTUP

    //printf("ZADAJTE MIN CISLO: \n");
    //scanf ("%d", &b);
    b = 1;
    //printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    //scanf ("%d", &vstp);
    vstp = 1;
    printf("ZADAJTE POCET ZIAKOV: \n");
    scanf ("%d", &a);
    printf("========================================================================== \n");

    //LOOP

    for (; a >= b; a -= vstp)
    {
        printf("(%d) Zadaj vysku: \n", a);
        scanf ("%d", &c);
        if (c > max)
        {
            max = c;
        }
        if (c < min)
        {
            min = c;
        }
        if (c > 170)
        {
            d = d + 1;
        }
        
        e = e + c;
        g = g + 1;
    }

    //FINAL VYSTUP

    f = e / g;
    printf("Priemerna vyska: %.2f\n", f);
    printf("Najvysia vyska: %d\n", max);
    printf("Najnizsia vyska: %d\n", min);
    printf("Pocet ziakov vyssich ako 170cm: %d\n", d);
    printf("========================================================================== \n");

    //END

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
