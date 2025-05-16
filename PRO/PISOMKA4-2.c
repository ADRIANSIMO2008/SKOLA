#include <stdio.h>

int main()
{
    int plat, pocetZamestnancov = 0, pocetVyssichPlatov = 0;
    int platRiaditela = 0, sucetPlatov = 0;
    float priemernyPlat;

    printf("ZADAJTE PLATY ZAMESTNANCOV (POSLEDNY PLAT MUSI BYT RIADITELA, KTORÝ PRESIAHNE 4000 €):\n");

    do
    {
        printf("ZADAJTE PLAT ZAMESTNANCA: ");
        scanf("%d", &plat);

        pocetZamestnancov++; // Zvýši počet zamestnancov
        sucetPlatov += plat; // Pridá plat k súčtu

        if (plat > 1800)
        {
            pocetVyssichPlatov++; // Zvýši počet zamestnancov s platom vyšším ako 1800 €
        }

        if (plat > 4000)
        {
            platRiaditela = plat; // Uloží plat riaditeľa
        }

    } while (plat <= 4000); // Pokračuje, kým plat nepresiahne 4000 €

    // Výpočet priemerného platu
    priemernyPlat = (float)sucetPlatov / pocetZamestnancov;

    // Výstup
    printf("==========================================================================\n");
    printf("POCET ZAMESTNANCOV (VRATANE RIADITELA): %d\n", pocetZamestnancov);
    printf("POCET ZAMESTNANCOV S PLATOM VYSSIM AKO 1800 €: %d\n", pocetVyssichPlatov);
    printf("PRIEMERNY PLAT: %.2f €\n", priemernyPlat);
    printf("PLAT RIADITELA JE O %.2f € VYSSI AKO PRIEMERNY PLAT.\n", platRiaditela - priemernyPlat);
    printf("==========================================================================\n");

    printf("Press Enter to continue...");
    getchar();
    getchar(); 
    return 0;
}