/*  Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    printf("Sucessor: %d\n", x + 1);
    printf("Antecessor: %d\n", x - 1);

    return 0;
}