/* Faça um programa que leia dois números inteiros e depois os imprima na ordem
   inversa em que eles foram lidos. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Digite um número inteiro: ");
    scanf("%d", &y);

    printf("%d %d\n", y, x);

    return 0;
}