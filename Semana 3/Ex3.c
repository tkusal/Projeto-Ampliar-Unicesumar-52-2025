/*
    Escreva um programa que calcule o fatorial de um numero
*/

#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    /*
    for (int i = num-1; i > 0; i--) {
    }
    */
    int fatorial = 1;
    
    for (int i = 1; i <= num; i++) {
       fatorial *= i;
    }

    printf("Fatorial = %d", fatorial);

    return 0;
}