/*
    Escreva um programa que imprima na tela todas as tabuadas de multiplicação de 1 a 9.
*/

#include <stdio.h>

int main() {

    for (int i = 1; i <=9; i++) {
        for (int j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("----------------------------\n");
    }

    return 0;
}