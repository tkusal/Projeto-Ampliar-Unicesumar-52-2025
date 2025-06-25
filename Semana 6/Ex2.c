/*
    Escreva um programa que permita o usuário informar 2 números e realizar as 4 operações aritméticas.
    O programa deve ser baseado no sseguinte menu: 

    1. Soma
    2. Subtração
    3. Multiplicação
    4. Divisão
    5. Sair

    - O programa só poderá ser encerrando quando o usuário escolher a opção de sair. 
    - Cada operação deverá ser uma sub-rotina.
*/

#include <stdio.h>

float Entrada () {
    float n;
    printf("Informe um número: ");
    scanf("%f", &n);
    return n;
}

void Soma (float n1, float n2) {
   printf("O resultado da soma é %.2f\n", n1+n2); 
}

void Subtracao (float n1, float n2) {
   printf("O resultado da subtração é %.2f\n", n1-n2);  
}

void Multiplicacao (float n1, float n2) {
    printf ("O resultado da multiplicação é %.2f\n", n1*n2);
}

void Divisao (float n1, float n2) {
    if (n2 != 0){
        printf ("O resultado da divisão é %.2f\n", n1/n2);
    } else {
        printf("Não é possível realizar uma divisão por Zero.\n");
    }
}

int main() {
    float num1, num2;
    int opcao;

    do {
        printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nEscolha uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                num1 = Entrada();
                num2 = Entrada();
                Soma (num1 , num2);
                break;
            case 2:
                num1 = Entrada();
                num2 = Entrada();
                Subtracao (num1, num2);
                break;
            case 3:
                num1 = Entrada();
                num2 = Entrada();
                Multiplicacao (num1, num2);
                break;
            case 4:
                num1 = Entrada();
                num2 = Entrada();
                Divisao (num1, num2);
                break;
            case 5:
                printf("Encerrando o programa...");
                return 0;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n"); 
                break;
        }
    } while (1);    
}