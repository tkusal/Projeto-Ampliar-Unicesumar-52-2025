/*
    Escrever um algoritmo que imprima na tela a contagem regressiva de 10 a 1;
*/

#include <stdio.h>

int main() {

    int x;

    for (x = 10; x > 0; x--) {
        printf("%d \n", x);
    }

    printf("Fora do for: %d", x);

    return 0;
}