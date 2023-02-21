/*  Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3
    de números inteiros. Em seguida, calcule um vetor contendo três posições, em que
    cada posição deverá armazenar a soma dos números de cada coluna da matriz. 
    Exiba na tela esse array */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int m[3][3], v[] = {0, 0 , 0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite um número: ");
            scanf("%d", &m[i][j]);

            v[j] += m[i][j];
        }
    }

    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}