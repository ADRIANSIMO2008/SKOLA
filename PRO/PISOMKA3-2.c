#include <stdio.h>
int main()
{
    int vstp,a,b,c,max,min;
    float f,e,g;
    e = 0;
    f = 0;
    g = 0;
    max = 0;
    min = 99999;

    //VSTUP

    b = 1;
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
        
        e = e + c;
        g = g + 1;
    }

    //FINAL VYSTUP

    f = e / g;
    printf("Priemerna vyska: %.2f\n", f);
    printf("Najvysia vyska: %d\n", max);
    printf("Najnizsia vyska: %d\n", min);
    printf("========================================================================== \n");

    //END

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}