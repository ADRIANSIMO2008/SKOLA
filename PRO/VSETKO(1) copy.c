#include <stdio.h>
int main()
{
    int vstup,pri;
    printf("ZADAJTE CISLO: ");
    scanf ("%d", &vstup);
    pri = vstup % 2;
    if (pri < 1) {
        printf ("ZADALII STE PARNU HODNOTU");
    }
    if (pri > 0) {
        printf ("ZADALII STE NEPARNU HODNOTU"); 
    }

}
