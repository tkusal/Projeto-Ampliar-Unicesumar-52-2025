/*
    Escreva um programa em C que receba a idade de uma pessoa e informe se ela é maior de idade (a partir de 18 anos) ou
    se ela ainda é menor de idade.
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe uma idade: ");
    scanf("%d", &idade);

    printf("%s", idade >= 18 ? "É maior de idade" : "Menor de idade"); //Operador Ternário

    /*
    if (idade >= 18)
    {
        printf("É maior de idade.");
    }
    else
    {
        printf("É menor de idade.");
    }
    */

    return 0;
}