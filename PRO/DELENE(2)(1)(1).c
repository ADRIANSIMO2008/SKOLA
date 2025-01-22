#include <stdio.h>
int main()
{
    int jedna, dve, tri, vys,zvy;
    printf ("ZADAJTE DVE CISLA");
    scanf ("%d %d", &jedna,&dve);
    vys = jedna / dve;
    zvy = jedna % dve;
    printf ("VYSLEDOK JE %d A ZVYSOK JE %d",vys,zvy);
    return 0;
    }
