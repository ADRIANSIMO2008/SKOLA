#include <stdio.h>
int main()
{
    int vstup,a,b;
    printf("ZADAJTE CISLO: ");
    scanf ("%d", &vstup);
    
    a = vstup;


    if (vstup > 5 && vstup < 15) {
        b = vstup % 5;
        if (b == 0) {
            printf ("CISLO JE V INTERVALE 5 - 15 A JE DELITELNE 5MI");
        }
        if (b != 0) {
            printf ("CISLO SA NACHADZA V INTERVALE ALE NIE JE DELITELNE 5MI");
        }
    }

    else {
        printf ("CISLO SA NACHADZA MIMO INTERVALU");
    }

    return 0;
}
