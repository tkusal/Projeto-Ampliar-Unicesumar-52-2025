#include <stdio.h>
#include <string.h>

int main() {
    char nome[10];
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe seu nome: ");
    //scanf("%9[^\n]s", nome);
    fgets(nome, sizeof(nome), stdin);
    nome[ strcspn(nome, "\n") ] = '\0';

    printf("Seu nome é: %s e sua idade é %d.", nome, idade);

    return 0;
}