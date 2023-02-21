/* Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva
   na tela quantos valores maiores do que 10 ela possui. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[4][4];
    int cont = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite um número: ");
            scanf("%f", &m[i][j]);

            if(m[i][j] > 10) {
                cont++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10\n", cont);

    return 0;
}