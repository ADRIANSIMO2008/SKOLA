#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vstup,vstp,a,b,c,d,e,f,g;
    e = 0;
    f = 0;
    g = 0;

    //VSTUP

    //printf("ZADAJTE MIN CISLO: \n");
    //scanf ("%d", &b);
    b = 1;
    //printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    //scanf ("%d", &vstp);
    vstp = 1;
    printf("ZADAJTE POCET CISLO: \n");
    scanf ("%d", &a);
    printf("========================================================================== \n");

    //LOOP

    for (; a >= b; a -= vstp)
    {
        printf("(%d) Zadaj cislo: \n", a);
        scanf ("%d", &c);
        e = e + c;
    }

    //FINAL VYSTUP

    printf("VySLEDok %d\n", e);
    printf("========================================================================== \n");

    //END

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
