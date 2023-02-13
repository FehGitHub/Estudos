/* Escreva um programa que leia um número inteiro e depois o imprima. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("%d\n", x);

    return 0;
}