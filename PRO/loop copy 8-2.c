#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vstup,vstp,a,b,c,d,x,y,z,xy,vy;
    float f,e,g;
    e = 0;
    f = 0;
    g = 0;
    x = 0;
    y = 0;
    z = 0;
    xy = 0;
    vy = 0;
    
    //max = 0;
   // min = 99999;

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
        CHYBA:
        printf("(%d) ZADAJT ZNAMKU: \n", a);
        scanf ("%d", &c);
        if (c == 1)
        {
            x = x + 1;
        }
        else if (c == 2)
        {
            y = y + 1;
        }
        else if (c == 3)
        {
            z = z + 1;
        }
        else if (c == 4)
        {
            xy = xy + 1;
        }
        else if (c == 5)
        {
            vy = vy + 1;
        }
        else
        {
            printf("Neplatna znamka! Zadajte cislo medzi 1 a 5.\n");
            goto CHYBA;
        }

        e = e + c;
        g = g + 1;
    }

    //FINAL VYSTUP

    f = e / g;
    printf("Priemerna znamka: %.2f\n", f);
    printf("Znamka 1: %d\n", x);
    printf("Znamka 2: %d\n", y);
    printf("Znamka 3: %d\n", z);
    printf("Znamka 4: %d\n", xy);
    printf("Znamka 5: %d\n", vy);
    printf("========================================================================== \n");

    //END

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
