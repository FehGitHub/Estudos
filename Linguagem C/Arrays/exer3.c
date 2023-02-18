/* Faça um programa que leia cinco valores e os armazene em um vetor.
   Em seguida, mostre todos os valores lidos juntamente com a média dos valores. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[5], media, soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%f", &v[i]);

        soma += v[i];
    }

    media = soma / 5;

    printf("Média dos valores: %f\n", media);

    return 0;
}