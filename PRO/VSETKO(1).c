#include <stdio.h>
int main()
{
    int vstup;
    printf("ZADAJTE CISLO: ");
    scanf ("%d", &vstup);
    if (vstup < 0 ) {
        printf ("ZADALII STE ZAPORNU HODNOTU");
    }

    if (vstup == 0) {
        printf ("ZADALII STE NULU");
    }
    
    if (vstup > 0) {
        printf ("ZADALII STE KLADNU HODNOTU");
    }   

    else {
        printf ("ZADALII STE NEPLATNU HODNOTU");
    }
}
