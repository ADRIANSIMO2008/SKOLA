#include <stdio.h>
int main()
{
    int pole[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        pole[i] = i + 1; 
        printf("%d ", pole[i]);
    }
    return 0;
}
