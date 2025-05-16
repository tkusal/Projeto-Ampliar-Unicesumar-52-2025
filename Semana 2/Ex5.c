/*
    Escreva um programa que leia 4 idades e informe qual a mais velha e qual a mais nova.
*/

#include <stdio.h>

int main() {
    int idade1, idade2, idade3, idade4;    

    printf("Informe um idade: ");
    scanf("%d", &idade1);
    printf("Informe um idade: ");
    scanf("%d", &idade2);
    printf("Informe um idade: ");
    scanf("%d", &idade3);
    printf("Informe um idade: ");
    scanf("%d", &idade4);

    int maiorIdade = idade1;
    int menorIdade = idade1;

    if (maiorIdade < idade2) { maiorIdade = idade2;}
    if (menorIdade > idade2) { menorIdade = idade2;}

    if (maiorIdade < idade3) { maiorIdade = idade3;}
    if (menorIdade > idade3) { menorIdade = idade3;}

    if (maiorIdade < idade4) { maiorIdade = idade4;}
    if (menorIdade > idade4) { menorIdade = idade4;}
    
    printf("Maior idade = %d\nMenor idade = %d", maiorIdade, menorIdade);

    return 0;
}