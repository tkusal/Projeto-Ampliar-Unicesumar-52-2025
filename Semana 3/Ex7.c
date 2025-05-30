/*
    Escreva um programa que receba um valor em minutos e inicie um cronomtro deste valor
*/

#include <stdio.h>
#include <unistd.h>

int main() {
    int minuto;

    printf("Informe a quantidade de minutos para cronometrar: ");
    scanf("%d", &minuto);

    for (int min = 0;  min <= minuto; min++) {
        for (int seg = 0; seg <= 59; seg++) {
            printf("%d:%d\n", min, seg);
            if (min == minuto) {
                break;
            }
            sleep(1);            
        }  
    }

    return 0;
}