#include <stdio.h>
int main()
{
    float vys;
    int jedna, dve, tri;
    printf ("ZADAJTE TEPLOTU O 6 hod 12 hod A 18 hod: ");
    scanf ("%d %d %d", &jedna,&dve,&tri);
    vys = (jedna + dve + dve + tri) / 4;
    printf ("PRIEMER JE %.1f",vys);
    return 0;
    }
