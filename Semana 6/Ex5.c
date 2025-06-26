/*
    Escreva um programa que receba o cadastro de 3 carros.
    Cada carro possui Ano, Modelo e Preço.
    O programa deverá exibir na tela o modelo e ano do carro mais caro.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int ano;
    float valor;
    char modelo[20];   
} Veiculo;
 
int main () {
    Veiculo carros[3];
    float maiorPreco = 0;
    int indiceMaisCaro;

    for (int i = 0; i < 3; i++) {
        printf("Insira o modelo do carro: ");
        fgets( carros[i].modelo , sizeof(carros[i].modelo) , stdin );
        carros[i].modelo[ strcspn( carros[i].modelo , "\n" ) ] = '\0';

        printf("Insira o ano do carro: ");
        scanf("%d", &carros[i].ano);
        getchar();

        printf("Insira o valor do carro: ");
        scanf("%f", &carros[i].valor);
        getchar();

        if (carros[i].valor > maiorPreco) {
            maiorPreco = carros[i].valor;
            indiceMaisCaro = i;
        }
    }

    printf("Modelo: %s \n", carros[indiceMaisCaro].modelo);
    printf("Ano: %d  \n", carros[indiceMaisCaro].ano );

    return 0;
}