/* Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma 
   dos elementos dessa matriz que pertencem à diagonal principal ou secundária.
   Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
   Imprima na tela a diferença entre os dois valores. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[5][5], soma_diagonais = 0, soma_nao_diagonais = 0, diferenca;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            /* Determina os valores que pertencem a 
               diagonal principal ou secundária e os soma */

            if((i == j) || (j + 1 == 5 - i)) {
                soma_diagonais += m[i][j];
            }
            /* Determina os valores que não pertencem a 
               diagonal principal ou secundária e os soma */

            else if((i != j) && (j + 1 != 5 - i)) {
                soma_nao_diagonais += m[i][j];
            }
        }
    }

    diferenca = soma_diagonais - soma_nao_diagonais;

    if(diferenca < 0) {
        diferenca = diferenca * -1;
    }

    printf("\nDiferença entre  a soma dos valores da diagonal p. e sec. da soma dos demais valores: %f\n", diferenca);

    return 0;
}