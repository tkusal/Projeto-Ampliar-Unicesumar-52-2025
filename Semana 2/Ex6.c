/*
    Escreva um programa que receba o salário de uma pessoa e calcule o imposto de renda dela baseado na tabela abaixo:
    - Até 2259,20, IRPF 0%
    - De R$ 2.259,21 até R$ 2.826,65, IRPF 7,5%
    - De R$ 2.826,66 até R$ 3.751,05, IRPF 15,0%
    - De R$ 3.751,06 até R$ 4.664,68, IRPF 22,5%
    - Acima de R$ 4.664,68, IRPF 27,5%
*/

#include <stdio.h>

int main() {
    float salario, irpf;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    if (salario <= 2259.20) {
        printf("Não há IRPF a ser debitado.");
    } else if (salario <= 2826.65) {
        irpf = salario * 7.5 / 100;  //salario * 0.075        
    } else if (salario <= 3751.05) {
        irpf = salario * 15 / 100; //salario * 0.15
    } else if (salario <= 4664.68) {
        irpf = salario * 22.5 / 100; //salario * 0.225
    } else {
        irpf = salario * 27.5 / 100; //salario * 0.275
    }

    printf("IRPF = %.2f", irpf);

    return 0;
}