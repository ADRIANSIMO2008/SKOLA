#include <stdio.h>
int main()
{
    int vstup,e,nov,bat,pred,msv,ssv,mla,mld,dos,sta;
    nov = 0;
    bat = 0;
    pred = 0;
    msv = 0;
    ssv = 0;
    mla = 0;
    mld = 0;
    dos = 0;
    sta = 0;
    printf("ZADAJDE TOCET LUDI: ");
    scanf("%d", &e);
    for (int i = e; i > 0; i--)
    {
        err:
        printf("(%d) ZADAJTE VEK: ", i);
        scanf ("%d", &vstup);
        if (vstup == 0)
        {
            printf("NOVORODENEC \n");
            nov = nov + 1;
        }
        else if (vstup <= 2 && vstup >= 1)
        {
            printf("BATOLA \n");
            bat = bat + 1;
        }
        else if (vstup >= 3 && vstup <= 6)
        {
            printf("PREDSKOLAK \n");
            pred = pred + 1;
        }
        else if (vstup >= 7 && vstup <= 12)
        {
            printf("MLADSI SKOLSKY VEK \n");
            msv = msv + 1;
        }
        else if (vstup >= 13 && vstup <= 15)
        {
            printf("STARSI SKOLSKY VEK \n");
            ssv = ssv + 1;
        }
        else if (vstup >= 16 && vstup <= 18)
        {
            printf("MLADISTVY \n");
            mla = mla + 1;
        }
        else if (vstup >= 19 && vstup <= 25)
        {
            printf("MLADY DOSPELY \n");
            mld = mld + 1;
        }
        else if (vstup >= 26 && vstup <= 70)
        {
            printf("DOSPELY \n");
            dos = dos + 1;
        }
        else if (vstup >= 71 && vstup <= 120)
        {
            printf("STAREC \n");
            sta = sta + 1;
        }
        else
        {
            printf("ZADALI STE ZLU HODNOTU\n");
            goto err;
            
        }
    }
    printf("========================================================================== \n");
    printf("NOVORODENCI: %d\n", nov);
    printf("BATOLE: %d\n", bat);
    printf("PREDSKOLAKI: %d\n", pred);
    printf("MLADSI SKOLSKY VEK: %d\n", msv);
    printf("STARSI SKOLSKY VEK: %d\n", ssv);
    printf("MLADISTVY: %d\n", mla);
    printf("MLADY DOSPELY: %d\n", mld);
    printf("DOSPELY: %d\n", dos);
    printf("STAREC: %d\n", sta);
    printf("========================================================================== \n");

        // End
        printf("Press Enter to continue...");
        getchar();
        getchar();
        
    return 0;
}
