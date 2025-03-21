#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vstup,vstp,a,b,c,d,e,f,g;
    e = 1;
    f = 0;
    g = 0;

    //VSTUP

    //printf("ZADAJTE MIN CISLO: \n");
    //scanf ("%d", &b);
    a = 1;
    //printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    //scanf ("%d", &vstp);
    vstp = 1;
    printf("ZADAJTE POCET CISLO: \n");
    scanf ("%d", &b);
    printf("========================================================================== \n");

    //LOOP

    for (; a <= b; a ++)
    {
        vstp = vstp * a;
        printf ("%d \n", vstp);
    }

    //FINAL VYSTUP

    printf("========================================================================== \n");
    printf("VySLEDok %d\n", vstp);
    printf("========================================================================== \n");

    //END

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
