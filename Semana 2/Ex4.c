/*
    Escreva um programa que receba o peso e altura de uma pessoa e calcule o IMC dela.
    Baseado no IMC, informe se a pessoa está:
    - Abaixo do peso (IMC < 18,5)
    - Peso normal (18,5 > IMC < 24,9)
    - Sobrepeso (24,9 > IMC < 29,9)
    - Obesidade (29,9 > IMC)

    (altura * altura) / peso
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc <= 18.5) {
        printf("IMC = %.2f\nEstá abaixo do peso.", imc);
    } else if (imc <= 24.9) {
        printf("IMC = %.2f\nEstá no peso ideal.", imc);
    } else if (imc <= 29.9) {
        printf("IMC = %.2f\nEstá com sobrepeso.", imc);
    } else {
        printf("IMC = %.2f\nEstá obeso.", imc);
    }

    return 0;
}