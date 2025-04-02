#include <stdio.h>

int main()
{
    int n;
    float pri = 0, vyd = 0, c;

    // VSTUP

    printf("ZADAJTE POCET PRIJMOV A VYDAVKOV: ");
    scanf("%d", &n);
    printf("ZADAJTE PRIJMY A VYDAVKY:\n");

    //LOOP

    for (int i = 0; i < n; i++)
    {
        printf("ZADAJTE CISLO %d: ", i + 1);
        scanf("%f", &c);

        if (c >= 0)
        {
            pri += c; 
        }
        else
        {
            vyd += c; 
        }
    }

    vyd = -vyd;

    //FINAL VYSTUP

    printf("========================================================================== \n");
    printf("SUCET PRIJMOV: %.2f\n", pri);
    printf("SUCET VYDAVKOV: %.2f\n", vyd);
    printf("ZOSTATOK: %.2f\n", pri - vyd);

    if (pri > vyd)
    {
        printf("PRIJMY SU VACsie AKO VYDAVKY.\n");
    }
    else if (pri < vyd)
    {
        printf("VYDAVKY SU VACsie AKO PRIJMY.\n");
    }
    else
    {
        printf("PRIJMY A VYDAVKY SU ROVNAKE.\n");
    }
    printf("========================================================================== \n");

    // End

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}