/*
    Escreva um programa que receba o salario e a idade de uma pessoa.
    Se ele tiver acima de 30 anos, deverá receber um aumento de 10% do salário. 
    Informe qual o novo salário da pessoa.
*/

#include <stdio.h>

int main() {
    float salario;
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    if (idade > 30) {
        salario = salario * 1.1;
        //salario *= 1.1;
        printf ("Seu novo salário é: R$%.2f", salario);
    } else {
        printf("Não há aumento.");
    }

    return 0;
}