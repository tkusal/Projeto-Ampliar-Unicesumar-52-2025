/*
    Escreva um algortimo que receba 2 notas de um aluno. O pgorgrama deverá calcular a média do aluno e informar se
    ele está aprovado (média maior que 7), em recuperação (média entre 5 e 7) ou reprovado (média menor que 5).
*/

#include <stdio.h>

int main()
{
    float nota1;
    float nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0)
    {
        printf("Aluno aprovado com media %.2f.\n", media);
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado com media %.2f.\n", media);
    }
    else
    {
        printf("Aluno está em recuperação com media %.2f.\n", media);
    }
    
    /*
    if (media >= 7.0)
    {
        printf("Aluno aprovado com media %.2f.\n", media);
    }
    else if (media >= 5.0)
    {
        printf("Aluno está em recuperação com media %.2f.\n", media);
    }
    else
    {
        printf("Aluno reprovado com media %.2f.\n", media);
    }
    */

    return 0;
}