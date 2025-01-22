#include <stdio.h>
int main()
{
    int vstup,vstp,b;
    float c,a;
    printf("ZADAJTE CENU: ");
    scanf ("%d", &vstup);
    printf("ZADAJTE VEK: ");
    scanf ("%d", &vstp);

    a = vstup;
    b = vstp;

    if (b <= 6 && b > 0) {
        printf ("VSTUP JE ZADARMO");
    }

    if ((b > 6 && b <= 18) || b >= 70) {
        c = a / 2;
        printf ("VSTUP JE ZA %.1f EUR", c);
    }

    if (b > 18 && b < 70) {
        printf ("VSTUP JE ZA %.0f EUR", a);
    }

    if (b <= -1)
    {
        printf ("NEPLATNY VEK");
    }
    
    return 0;
}