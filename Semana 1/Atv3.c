/*
    Escreva um algoritmo em C que receba dois números e calcule a multiplicação entre eles.
*/

#include <stdio.h>

int main() {
    int n1, n2, result;

    printf("Informe o primeiro valor: ");
    scanf("%d" , &n1);

    printf("Informe o segundo valor: ");
    scanf("%d" , &n2);

    result = n1 * n2;

    printf("Resultado = %d", result);

    return 0;
}