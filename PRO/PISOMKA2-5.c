#include <stdio.h>
int main() {
    int a,b,c,vstup;

    // VSTUP

    printf("ZADAJ CISLO: ");
    scanf("%d", &vstup);

    // VYPOCET

    if (vstup >= 100 && vstup <= 550) {
        b = vstup % 5;
        if (b == 0) {
            printf ("CISLO JE V INTERVALE 100 - 550 A JE DELITELNE 5MI");
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