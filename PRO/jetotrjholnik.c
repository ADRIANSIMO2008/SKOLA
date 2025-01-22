#include <stdio.h>
int main()
{
    int vstup,vstp,a,b,vst,c,pri;
    printf("ZADAJTE ROZMERY TROJUHOLNIKA: ");
    scanf ("%d %d %d", &vstup, &vstp, &vst);
    
    a = vstup;
    b = vstp;
    c = vst;

    if (a + b > c && a + c > b && b + c > a) {
        printf ("JE TO TROJUHOLNIK \n");
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            printf ("JE TO PRAVOUHLY TROJUHOLNIK");
        }

        else{
            printf ("NIE JE TO PRAVOUHLY TROJUHOLNIK");
        }
    }

    else {
        printf ("NIE JE TO TROJUHOLNIK");
    }
    return 0;
}
