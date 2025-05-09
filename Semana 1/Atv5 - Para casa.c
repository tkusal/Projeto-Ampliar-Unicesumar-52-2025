/*
    2. Escreva um algoritmo em C que receba um número inteiro e retorne o resto deste
    número em uma divisão por 2.
*/

#include <stdio.h>

int main() {
    int numero, resto;

    printf("Informe um número: ");
    scanf("%d", &numero);

    resto = numero % 2;

    printf("Na divisão de %d por 2, o resto é %d", numero, resto);

    return 0;
}