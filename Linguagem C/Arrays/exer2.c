/*  Crie um programa que leia do teclado seis valores inteiros e em seguida
    mostre na tela os valores lidos na ordem inversa. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[6];

    for(int i = 0; i < 6; i++) {
        printf("Digite um número para o índice %d: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 5; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}