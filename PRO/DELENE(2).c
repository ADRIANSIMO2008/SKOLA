#include <stdio.h>
int main()
{
    float num2, vys, absvys;
    int jedna, dve;
    printf ("ZADAJTE dve CISLA: ");
    scanf ("%d %d", &jedna,&dve);
    num2 = jedna * jedna + dve * dve ;
    vys = num2 * num2;
    absvys = sqrt(vys);
    printf ("PREPONA JE %f",absvys);
    return 0;
    }
