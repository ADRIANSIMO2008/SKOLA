#include <stdio.h>
int main()
{
    int dni, hod, min, sek, vyssek;
    printf ("ZADAJTE DNI HODINY MINUTY A SEKUNDY: ");
    scanf ("%d %d %d %d", &dni, &hod, &min, &sek);
    vyssek = dni * 24 * 60 * 60 + hod * 60 * 60 + min * 60 + sek;
    printf ("POCET SEKUND %d",vyssek );
    return 0;
    }
