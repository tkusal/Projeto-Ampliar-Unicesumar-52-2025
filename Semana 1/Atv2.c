#include <stdio.h>

int main() {
    //Declaração de variáveis
    int numero1;
    int numero2;
    int resultado;
    
    //Entrada de dados
    printf("Insira o primeiro numero inteiro: ");
    scanf( "%d", &numero1);

    printf("Insira o segundo numero inteiro: ");
    scanf( "%d", &numero2);

    //Processamento
    resultado = numero1 + numero2;

    //Saída de dados
    printf("Resultado = %d", resultado);

    //Finalização
    return 0;
}