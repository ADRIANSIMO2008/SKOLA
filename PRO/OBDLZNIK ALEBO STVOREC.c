#include <stdio.h>
int main()
{
    int vstup,vstp,a,b;
    printf("ZADAJTE ROZMERY: ");
    scanf ("%d %d", &vstup, &vstp);
    
    a = vstup;
    b = vstp;


    if (vstup == vstp) {
        printf ("JE TO STVOREC SO STRANAMI %d a %d", b, a);
        }
   
    if (a > b) {
        printf ("JE TO OBDELNIK SO STRANAMI %d a %d", a, b);
    }

    if (a < b) {
        printf ("JE TO OBDELNIK SO STRANAMI %d a %d", b, a);
    }

    return 0;
}
