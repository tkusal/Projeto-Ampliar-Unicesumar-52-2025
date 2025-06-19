/*
    Escreva um prorama em C que receba 5 idades e escreva-as em ordem crescente. 
    (Use vetor)
*/

#include <stdio.h>

int main() {
    int idades[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe uma idade: ");
        scanf("%d", &idades[i]);    
    }

    int aux;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4-i; j++) {
            if (idades[j] > idades[j+1]) {
                aux = idades[j];
                idades[j] = idades[j+1];
                idades[j+1] = aux;
            }
        }    
    }

    for (int i = 0; i < 5; i++) {
        printf("%d \n", idades[i]);
    }

    return 0;
}