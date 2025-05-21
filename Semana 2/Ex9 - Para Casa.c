/*
    Escreva um programa que leia o salário bruto de um funcionário e a quantidade de horas extras que ele trabalhou no mês.
    O programa deverá informar qual salário esse funcionário deverá receber.

    (Horas extra = valor da horas + 50%)
*/

#include <stdio.h>

int main() {
    float salarioBruto, salarioFinal, salarioHora;
    int horas;

    printf("Informe o salário bruto do funcionário: ");
    scanf("%f", &salarioBruto);

    printf("Informe a quantidade de horas extras que ele trabalhou: ");
    scanf("%d", &horas);

    salarioHora = salarioBruto / 220;
    salarioFinal = ((salarioHora + (salarioHora*0.5)) * horas) + salarioBruto;

    printf("O funcionário deverá receber R$%.2f", salarioFinal);

    return 0;
}