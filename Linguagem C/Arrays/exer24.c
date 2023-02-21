/* Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma
   dos elementos dessa matriz que estão abaixo da diagonal principal. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[6][6], soma = 0;

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);
        }
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {

            if(j < i) {
                soma += m[i][j];
            }
        }
    }

    printf("\nSoma: %f\n", soma);

    return 0;
}