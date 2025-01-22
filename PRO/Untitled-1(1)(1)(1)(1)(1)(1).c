#include <stdio.h>
int main()
{
    float pi, num2, numero1;
    int num;
    printf ("ZADAJTE PRIEMER KRUHU: ");
    scanf ("%d", &num);
    pi = 3.1415926;
    num2 = num * pi;
    numero1 = pi*num*num/4;
    printf ("OBVOD JE %.1f A OBSAH JE %.1f" ,num2,numero1);
    return 0;
    }
