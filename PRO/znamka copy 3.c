#include <stdio.h>
int main()
{
    int vstup;
    printf("ZADAJTE MESIAC: ");
    scanf ("%d", &vstup);
    if (vstup == 12 || vstup == 1 || vstup == 2)
    {
        printf("ZIMA");
        return 0;
    }
    if (vstup == 3 || vstup == 4 || vstup == 5)
    {
        printf("JAR");
        return 0;
    }
    if (vstup == 6 || vstup == 7 || vstup == 8)
    {
        printf("LETO");
        return 0;
    }
    if (vstup == 9 || vstup == 10 || vstup == 11)
    {
        printf("JESEN");
        return 0;
    }
    else
    {
        printf("ZADALI STE ZLU HODNOTU");
        return 0;
    }

}
