#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,c,d,e,f;
    e = 0;
    f = 0;

    //VSTUP

    printf("ZADAJTE MIN CISLO: \n");
    scanf ("%d", &b);
    printf("ZADAJTE CISLO O KTORE SA BUDE ZMENSOVAT: \n");
    scanf ("%d", &vstp);
    printf("ZADAJTE POCIATOCNE CISLO: \n");
    scanf ("%d", &a);
    printf("ZADAJTE CISLO KOTORYM SA BUDE NASOBIT: \n");
    scanf ("%d", &vstup);
    printf("========================================================================== \n");

    //LOOP

    for (a = a; a >= b; a-=vstp)
    {
        printf("(%d) Zadaj cislo: \n", a);
        scanf ("%d", &c);
        printf("%d \n", c*vstup);
        d = c % 2;
        if (d == 0)
        {
            printf("JE TO PARNE CISLO\n");
            e = e + 1;
        }
        if (d != 0)
        {
            printf("JE TO NEPARNE CISLO\n");
            f = f + 1;
        }
    }

    //FINAL VYSTUP

    printf("PARNYCH CISIEL JE %d\n", e);
    printf("NEPARNYCH CISIEL JE %d\n", f);

    return 0;
}
