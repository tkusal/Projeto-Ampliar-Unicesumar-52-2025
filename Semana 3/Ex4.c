/*
    Escreva um programa que receba 5 números informados pelo usuário
    e informe qual o maior número e qual o menor número.

    0  1   2   3  4

*/

#include <stdio.h>

int main() {
    int numero[5], maiorNumero, menorNumero;

    for (int i = 0; i < 5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numero[i]);
    }

    maiorNumero = numero[0];
    menorNumero = numero[0];

    for (int i = 1; i < 5; i++) {
        if (numero[i] > maiorNumero) {
            maiorNumero = numero[i];
        }
        if (numero[i] < menorNumero) {
            menorNumero = numero[i];
        }
    }

    printf("Maior Número = %d \nMenor número = %d", maiorNumero, menorNumero);

    return 0;
}