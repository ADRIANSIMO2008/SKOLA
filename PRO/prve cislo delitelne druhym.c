#include <stdio.h>
int main()
{
    int vstup,pri,vstupdva;
    printf("ZADAJTE 2 CISLa: ");
    scanf ("%d %d", &vstup, &vstupdva);
    pri = vstup % vstupdva;
    if (pri == 0) {
        printf ("PRVE CISLO JE DELITELNE DRUHYM");    
    }
    if (pri != 0) {
        printf ("PRVE CISLO NIE JE DELITELNE DRUHYM");
    }
}
