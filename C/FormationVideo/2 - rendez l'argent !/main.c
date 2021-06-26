#include <stdio.h>

int main(void) {
    unsigned int somme = 0;

    unsigned int billets = 0;

    printf("somme à rendre: ");
    scanf("%u", &somme);

    billets = somme/20;
    somme %= 20;

    if (billets) {
        printf("%ux20\n", billets);
    }
    
    if (somme >= 10) {
        puts("1x10");
        somme -= 10;
    }

    if (somme >= 5) {
        puts("1x5");
        somme -= 5;
    }
    
    if (somme >= 2) {
        puts("1x2");
        somme -= 2;
    }
    
    if (somme)
        puts("1x1");
    

    return 0;
}
