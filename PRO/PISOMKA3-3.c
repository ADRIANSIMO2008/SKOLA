#include <stdio.h>
int main()
{
    int vstp,a,b,c;
    float f,e,g;
    e = 0;
    f = 0;
    g = 0;

    //VSTUP

    b = 1;
    vstp = 1;
    printf("========================================================================== \n");
    printf("ZADAJTE POCET NENECELYCH CISEL: \n");
    scanf ("%d", &a);
    printf("========================================================================== \n");
    printf("Cisla sa budu zistovat ci su v intervale jedna az sto \n");

    //LOOP

    for (; a >= b; a -= vstp)
    {
        printf("(%d) Zadaj CISLO: \n", a);
        scanf ("%d", &c);
        if (c > 0 && c < 100)
        {
            e = e + c;
            g = g + 1;
        }
        else
        {
            printf("ZADANE CISLO NEBOLo V INTERVALE 0-100 \n");
        }
        
    }

    if (e == 0)
    {
        printf("========================================================================== \n");
        printf("ZADANE CISLA NEBOLI V INTERVALE 0-100 \n");
        printf("========================================================================== \n");
        goto end;
    }
    
    //FINAL VYSTUP

    f = e / g;
    printf("========================================================================== \n");
    printf("Aritmeticky priemer: %.2f\n", f);
    printf("========================================================================== \n");

    //END

    end:
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}