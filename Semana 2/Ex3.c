/*
    Escreva um programa que permita o usuário calcular 2 números inteiros, dandos as opções de:

    Opção 1: Somar
    Opção 2: Subtrair
    Opção 3: Multiplicar
    Opção 4: Dividir
*/

#include <stdio.h>

int main() {
    int num1, num2, opcao, resultado;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    printf("1. Soma\n2. Subtrair\n3. Multiplicar\n4. Dividir\nEscolha uma das opções acima: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            resultado = num1+num2;
            break;
        case 2:
            resultado = num1-num2;
            break;
        case 3:
            resultado = num1*num2;
            break;
        case 4:    
            resultado = num1/num2;
            break;
        default:
            printf("Opção inválida.");
            return 0;
    }

    printf("Resultado = %d", resultado);

    return 0;
}