/*
    Escreva um programa em C que leia a medida dos 3 lados de uma forma geométrica.
    O programa deverá usar o teorema de Pitágoras para definir se esta forma é um triângulo.

    A+B > C  |  B+C > A  |  C+A > B
    C² = A² + B²
    B² = A² + C²
    A² = C² + B²
*/

#include <stdio.h>

int main()
{
    float ladoA, ladoB, ladoC;

    printf("Informe um lado: ");
    scanf("%f", &ladoA);
    printf("Informe um lado: ");
    scanf("%f", &ladoB);
    printf("Informe um lado: ");
    scanf("%f", &ladoC);

    if ((ladoA + ladoB > ladoC) && (ladoB + ladoC > ladoA) && (ladoA + ladoC > ladoB))
    {
        printf("Esta figura geométrica, é um triangulo.\n");

        if ((ladoA * ladoA + ladoB * ladoB == ladoC * ladoC) || (ladoB * ladoB + ladoC * ladoC == ladoA * ladoA) ||
            (ladoA * ladoA + ladoC * ladoC == ladoB * ladoB))
        {
            printf("Esta figura é um triangulo retangulo.");
        }
        else
        {
            printf("Não é um triangulo retangulo.");
        }
    }
    else
    {
        printf("Não é um triangulo.");
    }

    return 0;
}