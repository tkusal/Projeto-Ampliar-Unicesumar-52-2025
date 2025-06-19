/*
    Escreva um programa em C que receba o cadastro de 3 alunos contendo nome, idade e 2 notas de uma disciplina.
    O programa deverá calcular a média de cada aluno e escrever na tela informando se ele está aprovado ou reprovado.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int idade;
    float nota1, nota2, media;
} Aluno;

int main () {
    Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[ strcspn(alunos[i].nome, "\n") ] = '\0';

        printf("Informe a idade do aluno: ");
        scanf("%d", &alunos[i].idade);

        printf("Informe primeira nota do aluno: ");
        scanf("%f", &alunos[i].nota1);

        printf("Informe segunda nota do aluno: ");
        scanf("%f", &alunos[i].nota2);
        getchar();
    }

    for (int i = 0; i < 3; i++) {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2 ;

        if (alunos[i].media > 6.0) {
            printf("O aluno %s está APROVADO com média %.2f\n", alunos[i].nome, alunos[i].media);
        } else {
            printf("O aluno %s está REPROVADO com média %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }

    return 0;
}