/*
    Escreva um programa que receba o cadastro de até 5 produtos.
    O programa deve consistir em no seguinte menu:

    1. Cadastrar Produto
    2. Pesquisar Produto
    3. Sair

    - O programa só poderá ser finalizado quando o usuário escolher a opção 3, sair.
    - Um produto possui Código, Descrição e Preço.
    - A opção 2 deverá buscar um produto pelo código dele.
    - Preste atenção nas validaçõs para evitar que o programa permita que o usuário cadastre mais produtos do que
    o permitido e evitar que os produtos possuam preços negativos.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    float valor;
    char descricao[30];
} Produto;

int main()
{
    Produto produtos[5];
    int opcao, contProdutos = 0;

    do
    {
        printf("1. Cadastrar Produto\n2. Pesquisar Produto\n3. Sair\nEsconha uma das opções: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
            case 1:
                if (contProdutos < 5)
                {
                    printf("Informe o código do produto: ");
                    scanf("%d", &produtos[contProdutos].codigo);
                    getchar();
                    
                    do {
                        printf("Informe o valor do produto: ");
                        scanf("%f", &produtos[contProdutos].valor);
                        getchar();

                        if(produtos[contProdutos].valor < 0) {
                            printf("Valor inválido. Não cadastre valores negativos.\n");
                        }
                    } while (produtos[contProdutos].valor < 0);    

                    printf("Informe a descrição do produto: ");
                    fgets (produtos[contProdutos].descricao, sizeof(produtos[contProdutos].descricao) , stdin);
                    produtos[contProdutos].descricao[ strcspn ( produtos[contProdutos].descricao , "\n" ) ] = '\0';

                    contProdutos++;
                }
                else
                {
                    printf("Não é possível cadastrar novos produtos.");
                }
                break;
            case 2:
                int codBusca, encontrou = 0;
                printf("Informe o código do produto que deseja buscar: ");
                scanf("%d", &codBusca);

                for (int i = 0; i <= contProdutos; i++) {
                    if (codBusca == produtos[i].codigo) {
                        printf("Código: %d \n", produtos[i].codigo);
                        printf("Descrição: %s \n", produtos[i].descricao);
                        printf("Preço: %.2f \n", produtos[i].valor);
                        encontrou = 1;
                    }
                }

                if ( encontrou == 0) {
                    printf("O código informado não foi localizado.\n");
                }

                break;
            case 3:
                printf("Encerrando...");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (1);
}