/*
    Escreva um programa que imprima na tela todos os números PARES entre 0 e 100.
*/

#include <stdio.h>

int main() {

    /*
    for (int i = 0; i < 100; i+=2)
    {
        if (i != 0) {
            printf("%d \n", i);
        }    
    }
    */
   
    /*
    for (int i = 2; i < 100; i+=2)
    {
            printf("%d \n", i);
    }
    */

    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }    
    }

    return 0;
}