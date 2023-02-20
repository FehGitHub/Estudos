/* Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre
   na tela a quantidade de números negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[] = {-5.1, -4.2, -3, -2.4, 1.5, 2.6, 3, 4, 5.5, 6};
    float soma_positivo = 0;
    int qtd_negativo = 0;

    for(int i = 0; i < 10; i++) {
        if(v[i] < 0) {
            qtd_negativo++;
        }
        else if(v[i] > 0) {
            soma_positivo += v[i];
        }
    }

    printf("Quantidade de valores negativos: %d\n", qtd_negativo);
    printf("Soma dos valores positivos: %f\n", soma_positivo);

    return 0;
}