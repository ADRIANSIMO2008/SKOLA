#include <stdio.h>
int main()
{
    int vstup,a,b,e,f,z,k,nni,nvi,mmi,mmin;
    z = 0;
    k = 0;
    e = 0;
    f = 0;
    nni = 0;
    nvi = 0;
    mmi = 0;
    mmin = 0;
    printf("ZADAJTE ZACIATOK INTERVALU: ");
    scanf("%d", &z);
    printf("ZADAJTE KONIEC INTERVALU: ");
    scanf("%d", &k);
    printf("ZADAJDE POCET CISEL: ");
    scanf("%d", &e);
    printf("ZADAJTE CISLO KOTORYM SA CISLA MAJU DELIT: ");
    scanf("%d", &f);
    printf("========================================================================== \n");
    for (int i = e; i > 0; i--)
    {
        printf("(%d) ZADAJTE CISLO: ", i);
        scanf ("%d", &vstup);
    
        a = vstup;
        b = vstup % f;
        if (vstup >= z && vstup <= k) 
        {
            if (b == 0) {
                printf ("CISLO JE V INTERVALE %d - %d A JE DELITELNE %dMI \n",z,k,f);
                nvi = nvi + 1;
            }
            if (b != 0) {
                printf ("CISLO SA NACHADZA V INTERVALE ALE NIE JE DELITELNE %dMI \n",f);
                nni = nni + 1;
            }
        }
        else 
        {
            if (b == 0)
            {
                printf ("CISLO SA NACHADZA MIMO INTERVALU \n");
                mmi = mmi + 1;
            }
            if (b != 0)
            {
                printf ("CISLO SA NACHADZA MIMO INTERVALU \n");
                mmin = mmin + 1;
            }
        }  
    }

    printf("========================================================================== \n");
    printf("NACHADZA SA V INT A JE DEL CISLOM %d: %d \n", f,nvi);    
    printf("NACHADZA SA v INT ALE NEDELITENDE CISLOM %d: %d \n",f ,nni);
    printf("MIMO INTERVALU A DELITELNE CISLOM %d: %d \n", f,mmi);
    printf("MIMO INTERVALU A NEDELITELNE CISLOM %d: %d \n", f,mmin);
    printf("========================================================================== \n");

    // End
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
