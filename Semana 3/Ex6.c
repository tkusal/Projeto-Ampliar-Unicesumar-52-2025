/*
    Escreva um programa que apresente o seguinte menu pro usuário;

    1. Cadastrar Produto
    2. Alterar preço do Produto
    3. Sair

    O programa só poderá ser encerrado quando o usuário escolher a opção 3 do menu.
    O programa não pode aceitar valores negativos como preço ou código de produto.
*/

#include <stdio.h>

int main() {
    int codigo, opcao;
    float valor;


    do {
        printf("1. Cadastrar Produto\n2. Alterar preço do Produto\n3. Sair\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                do {
                    printf("\nInforme o código do produto: ");
                    scanf("%d", &codigo);
                    if (codigo <= 0) {
                        printf("Código inválido.\n");
                    }
                } while (codigo <= 0);
                do{    
                    printf("Informe o valor do produto: ");
                    scanf("%f", &valor);
                    if (valor < 0) {
                        printf("Valor inválido.");
                    }
                } while(valor < 0);
                break;
            case 2:    
                do{    
                    printf("\nInforme o novo valor do produto: ");
                    scanf("%f", &valor);
                    if (valor < 0) {
                        printf("Valor inválido.");
                    }
                } while(valor < 0);
                break;
            case 3:
                return 0;
                break;
            default:
                printf("Opção Inválida.\n"); 
                break;   

        }
    } while (1);    
    
}