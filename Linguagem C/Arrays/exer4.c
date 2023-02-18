/* Faça um programa que leia um vetor de oito posições. Em seguida,
   leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
   Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[8], soma;
    int x, y;

    for(int i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%f", &v[i]);
    }

    printf("\nEscolha uma posição do vetor (de 1 a 8): ");
    scanf("%d", &x);

    printf("Escolha outra posição do vetor (de 1 a 8): ");
    scanf("%d", &y);

    soma = v[x - 1] + v[y - 1];

    printf("\nSoma dos valores: %.2f\n", soma);

    return 0;
}