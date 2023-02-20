/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. 
   Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a[10], b[10], c[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro para o vetor A: ");
        scanf("%d", &a[i]);
    }

    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("Digite um número inteiro para o vetor B: ");
        scanf("%d", &b[i]);
    }

    printf("\nVetor C: ");

    for(int i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];
        printf("%d ", c[i]);
    }

    return 0;
}