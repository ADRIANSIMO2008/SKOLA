#include <stdio.h>
#include <stdbool.h>

int main()
{
    int cis;
    bool jePrvo = true;

    // Vstup
    printf("ZADAJTE CISLO: ");
    scanf("%d", &cis);

    if (cis < 2)
    {
        jePrvo = false;
    }
    else
    {
        // Check divisors from 2 to sqrt(cis)
        for (int i = 2; i * i <= cis; i++)
        {
            if (cis % i == 0)
            {
                jePrvo = false;
                break;
            }
        }
    }

    // Vystup
    if (jePrvo)
    {
        printf("CISLO %d JE PRVOCISLO.\n", cis);
    }
    else
    {
        printf("CISLO %d NIE JE PRVOCISLO.\n", cis);
    }

    // End
    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}