/*
    Escreva um programa que receba 4 notas de um aluno e calcule a média delas. 
*/

#include <stdio.h>

int main() {
    float notas[4], media = 0;

    for ( int i = 0 ; i < 4 ; i++ ) {
        printf ("Informe uma nota: ");
        scanf("%f", &notas[i]);

        media = media + notas[i];
        // media += notas[i];
    }

    media = media / 4;

    printf("A média é %.2f", media);

    return 0;
}