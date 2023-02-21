/* Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela
   o maior valor contido nessa matriz e a sua localização (linha e coluna). */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[4][4], maior;
    int loc_l, loc_c;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);

            if(i == 0 && j == 0) { // Assume que o maior valor esta no indíce 0 0
                maior = m[i][j];
                loc_l = i + 1;
                loc_c = j + 1;
            }
            else if(maior < m[i][j]) { // Verifica qual o maior valor
                maior = m[i][j];
                loc_l = i + 1;
                loc_c = j + 1;
            }
        }
    }

    printf("\nMaior número: %f\n", maior);
    printf("Localização: linha %d, coluna %d\n", loc_l, loc_c);

    return 0;
}