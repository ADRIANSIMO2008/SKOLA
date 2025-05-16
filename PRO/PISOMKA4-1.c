#include <stdio.h>

int main()
{
    int znamka, sucet = 0, pocet = 0, max = 0, min = 999;
    float priemer;

    printf("ZADAJTE ZNAMKY ROZHODCOV (ZADANIE UKONCITE HODNOTOU 0):\n");

    do
    {
        printf("ZADAJTE ZNAMKU: ");
        scanf("%d", &znamka);

        if (znamka > 0 && znamka <= 5) // Kontrola, že známka je kladná
        {
            sucet += znamka; // Pridá známku k súčtu
            pocet++;         // Zvýši počet zadaných známok

            if (znamka > max) // Aktualizácia najlepšej známky
            {
                max = znamka;
            }
            if (znamka < min) // Aktualizácia najhoršej známky
            {
                min = znamka;
            }
        }
        else if (znamka < 0) // Kontrola neplatnej známky
        {
            printf("NEPLATNA ZNAMKA! ZNAMKY MUSIA BYT KLADNE.\n");
        }
        else if (znamka > 5) // Kontrola neplatnej známky
        {
            printf("NEPLATNA ZNAMKA! ZNAMKY MUSIA BYT MAXIMALNE 5.\n");
        }

    } while (znamka != 0); // Pokračuje, kým nie je zadaná hodnota 0

    // Výpočet aritmetického priemeru po vynechaní najlepšej a najhoršej známky
    if (pocet > 2) // Musia byť aspoň 3 známky na vynechanie max a min
    {
        sucet -= max; // Odstráni najlepšiu známku
        sucet -= min; // Odstráni najhoršiu známku
        priemer = (float)sucet / (pocet - 2); // Vypočíta priemer zo zvyšných známok
        printf("VYPOCITANA ZNAMKA PODLA PRAVIDIEL JE: %.2f\n", priemer);
    }
    else
    {
        printf("NEDOSTATOCNY POCET ZNAMOK NA VYPOCET.\n");
    }

    return 0;
}