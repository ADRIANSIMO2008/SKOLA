#include <stdio.h>
#include <stdlib.h>
int main()
{
    int zak, moc, i, moz;
    float vys;
    long long int pen;

    // VSTUP
    vys = 1;
    printf("GIN VAM DAL NA VYBER Z 2 MOZNOSTI 1. ZAKAZDE POLICKO NA SACHOVNICI 10k EUR a 2. ZACNE S 1 eur A ZA KAZDE POLICKO SA TO ZDVOJNASOBI alebo 3 obmietnut (SIGMA) \n");
    printf("ZADAJTE MOZNOST: \n");
    scanf("%d", &moz);
    printf("========================================================================== \n");

    if (moz == 1)
    {
        pen = 10000 * 64;
        printf("PENIAZE: %lld\n", pen);
        return 0;
    }
    else if (moz == 2)
    {
        for (i = 1; i <= 64; i++)
        {
            vys = vys * 2;
        }
        printf("%.0f\n", vys);
        return 0;
    }
    else if (moz == 3)
    {
        printf("SO SIGMA \n");
        return 0;
    }
    else
    {
        printf("ZADALI STE ZLY VSTUP\n");
        return 0;
    }

    // FINAL VYSTUP
    printf("%.0f\n", vys);
    printf("========================================================================== \n");

    // END
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}