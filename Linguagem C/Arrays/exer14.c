/* Faça um programa que leia uma matriz de tamanho 3 × 3.
   Imprima na tela o menor valor contido nessa matriz. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[3][3], menor;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);

            if(i == 0 && j == 0) { // Assume que o menor valor esta no indíce 0 0
                menor = m[i][j];
            }
            else if(menor > m[i][j]) { // Verifica qual o menor valor
                menor = m[i][j];
            }
        }
    }

    printf("Menor valor: %f\n", menor);

    return 0;
}