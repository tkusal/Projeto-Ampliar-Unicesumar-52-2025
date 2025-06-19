#include <stdio.h>

typedef struct {
    int ano;
    float kilometragem;
    int qtdPortas;
} CadastroCarro;

int main() {
    CadastroCarro veiculo;

    printf("Informe o ano do carro: ");
    scanf("%d", &veiculo.ano);

    printf("Informe a KM: ");
    scanf("%f", &veiculo.kilometragem);

    printf("Informe quantas portas tem o carro: ");
    scanf("%d", &veiculo.qtdPortas);

    printf("Ano: %d \nKM: %.2f \nPortas: %d", veiculo.ano, veiculo.kilometragem, veiculo.qtdPortas);

    return 0;
}