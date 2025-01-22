#include <stdio.h>
int main()
{
    float num2;
    int num, numdve;
    printf ("ZADAJTE DVA CISLA: ");
    scanf ("%d %d", &num, &numdve);
    num2 = num / numdve;
    printf ("%d : %d = %f",num,numdve,num2);
    return 0;
    }
