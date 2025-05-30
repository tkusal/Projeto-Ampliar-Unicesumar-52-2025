#include <stdio.h>

#define L 6
#define C 3

int main() {

    int idade[L][C];

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Informe uma idade: ");
            scanf("%d", &idade[i][j]);
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Idade: %d\n", idade[i][j]);
        }
    }

    return 0;
}