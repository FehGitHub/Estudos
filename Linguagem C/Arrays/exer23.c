/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma
   dos elementos dessa matriz que estão acima da diagonal principal. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[5][5], soma = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {

            if(j > i) {
                soma += m[i][j];
            }
        }
    }

    printf("\nSoma: %f\n", soma);

    return 0;
}