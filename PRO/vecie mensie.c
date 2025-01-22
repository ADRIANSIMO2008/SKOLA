#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,vst,c;
    printf("ZADAJTE 3 CISLA: ");
    scanf ("%d %d %d", &vstup, &vstp, &vst);
    
    a = vstup;
    b = vstp;
    c = vst;

    if (a == b && a == c) {
        printf ("CISLA SA ROVNAJU");
    }
    if (a > b && a > c) {
        printf ("NAJVACSI JE %d", a);
    }
    if (b > a && b > c) {
        printf ("NAJVACSI JE %d", b);
    }
    if (c > a && c > b) {
        printf ("NAJVACSI JE %d", c);
    }
    if (a == b && a > c) {
        printf ("NAJVACSI JE %d", a);
    }
    if (a == c && a > b) {
        printf ("NAJVACSI JE %d", a);
    }
    if (b == c && b > a) {
        printf ("NAJVACSI JE %d", b);
    }

    return 0;
}
