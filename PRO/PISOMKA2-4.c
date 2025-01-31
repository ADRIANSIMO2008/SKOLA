#include <stdio.h>
int main() {
    int a,b,c;
    
    // VSTUP
    
    printf("ZADAJ PLAT: ");
    scanf("%d", &a);
    
    // VYPOCET

    if (a < 680 && a > 0){
        printf("PLAT BUDE 723 EUR");
        return 0; 
    } 
    if (a >= 680 && a <= 800){
        b = a + 70;
        printf("NOVY PLAT BUDE %d", b);
        return 0;
    }
    if (a > 800 && a < 1000){
        c = a * 1.1;
        printf("NOVY PLAT BUDE %d", c);
        return 0;
    }
    else {
        printf("NEPLATNE CISLO");
    }
    return 0;
}