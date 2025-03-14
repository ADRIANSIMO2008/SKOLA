#include <stdio.h>
#include <stdlib.h>

int main()
{
    float zac, tyz, tot, vys;
    int tyzdne = 52, i;
    vys = 0;

    // VSTUP
    printf("ZADAJTE POCIATOCNE VRECKOVE: \n");
    scanf("%f", &zac);
    printf("ZADAJTE TYZDENNE ZVYSENIE: \n");
    scanf("%f", &tyz);
    printf("========================================================================== \n");

    // VYPOCET
    tot = zac;
    for (i = 1; i <= tyzdne; i++)
    {
        tot += tyz;
        vys = vys + tot;
    }

    // FINAL VYSTUP
    printf("VRECKOVE ZA ROK: %.2f EUR\n", vys);
    printf("========================================================================== \n");

    // END
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}