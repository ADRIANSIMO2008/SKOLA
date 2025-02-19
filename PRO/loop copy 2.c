#include <stdio.h>
int main()
{
    int vstup,vstp,a,b;
    printf("ZADAJTE MIN CISLO: \n");
    scanf ("%d", &b);
    printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    scanf ("%d", &vstp);
    printf("ZADAJTE POCIATOCNE CISLO: \n");
    scanf ("%d", &vstup);
    printf("========================================================================== \n");
    a = vstup;
    if (a != b)
    {
        if (a > b)
        {
            for (a = a; a >= b; a-=vstp)
        {
            printf("%d \n", a);
        }
        }
        else
        {
            for (a = a; a <= b; a+=vstp)
        {
            printf("%d \n", a);
        }
        }
    }

    else
    {
        if (vstup = b)
        {
            printf("CHYBA 1 \n");
        }
        else
        {
            printf("CHYBA NEZNAMA \n");
        }
    }
    return 0;
}