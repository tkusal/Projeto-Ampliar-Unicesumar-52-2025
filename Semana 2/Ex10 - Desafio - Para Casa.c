/*
    Escreva um programa que receba um número e calcule a raiz quadrada dele.

    Dica: https://petbcc.ufscar.br/math/
*/

#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        //float raiz = sqrt(numero);
        printf("Raiz = %.0f", sqrt(numero));
    } else {
        printf("Não é possível calcular.");
    }

    return 0;
}