/* Faça um programa que leia três valores inteiros e mostre sua soma. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x, y, z, soma;

    printf("Digite 3 números inteiros separados por backspaces: ");
    scanf("%d %d %d", &x, &y, &z);

    soma = x + y + z;

    printf("Soma: %d\n", soma);

    return 0;
}