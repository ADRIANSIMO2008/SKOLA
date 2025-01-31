#include <stdio.h>
int main() {
    int a, b, c, d, najmensie;

    
    // VSTUP
    
    printf("ZADAJ 4 CISLA: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // VYPOCET
    
    najmensie = a;
    if (najmensie > b){
        najmensie = b;
    }
    if (najmensie > c) {
        najmensie = c;
    }
    if (najmensie > d){
        najmensie =  d;
    }
    
    // VYSTUP
    
    printf("NAJMENSIE CISLO JE: %d \n", najmensie);
    return 0;
}