#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int zak, exp;
    long long int vys = 1;

    // VSTUP
    printf("ZADAJTE ZAKLADNE CISLO: \n");
    scanf("%d", &zak);
    printf("ZADAJTE MOCNINU: \n");
    scanf("%d", &exp);

    // VYPOCET
    for (int i = 1; i <= exp; i++)
    {
        vys *= zak;
    }

    // VYSTUP
    printf("========================================================================== \n");
    printf("VYSLEDOK: %d^%d = %lld\n", zak, exp, vys);
    printf("========================================================================== \n");

    // End
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
