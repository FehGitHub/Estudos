/* Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x % 2 == 0) {
        printf("O número digitado é par\n");
    }
    else printf("O número digitado é impar\n");

    return 0;
}