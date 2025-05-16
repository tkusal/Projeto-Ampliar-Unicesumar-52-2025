/*
    Escreva um programa que simule um caixa eletrônico: leia o valor do saque e mostre
    quantas notas de 100, 50, 20, 10, 5 e 2 são necessárias.
*/

#include <stdio.h>

int main() {
    int valorSaque;
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, restante;

    printf("Informe o valor que deseja sacar: ");
    scanf("%d", &valorSaque);

    if (valorSaque <= 0) {
        printf("Valor inválido.");
        return 0;
    }

    notas_100 = valorSaque / 100;
    restante = valorSaque % 100;

    notas_50 = restante / 50;
    restante = restante % 50;

    notas_20 = restante / 20;
    restante %= 20;

    notas_10 = restante / 10;
    restante %= 10;

    notas_5 = restante / 5;
    restante %= 5;

    notas_2 = restante / 2;
    restante %= 2;

    printf("Para o saque de %d,00 será necessário: \n", valorSaque);
    printf("Notas de 100,00: %d\n", notas_100);
    printf("Notas de 50,00: %d\n", notas_50);
    printf("Notas de 20,00: %d\n", notas_20);
    printf("Notas de 10,00: %d\n", notas_10);
    printf("Notas de 5,00: %d\n", notas_5);
    printf("Notas de 2,00: %d\n", notas_2);

    return 0;
}