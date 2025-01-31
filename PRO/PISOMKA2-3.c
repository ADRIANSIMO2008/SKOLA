#include <stdio.h>
int main() {
    float a,b,c;
    
    // VSTUP
    
    printf("ZADAJ KM: ");
    scanf("%f", &a);
    printf("ZADAJ CAKANIE: ");
    scanf("%f", &b);

    // VYPOCET

    if (a > 5){
        c = 1.50 + (a-5) * 0.75 + b * 10 / 60;
        printf("CENA JE: %.2f", c);
        return 0; 
    } 
    if (a <= 5){
        c = 1.50 + b * 10 / 60;
        printf("CENA JE: %.2f", c);
        return 0;
    }
    return 0;
}