/* Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma
   dos valores contidos em sua diagonal secundária. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[3][3], soma = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);

            if(j + 1 == 3 - i) {
                soma += m[i][j];
            }
        }
    }

    printf("\nSoma dos valores da diagonal secundária: %f\n", soma);

    return 0;
}