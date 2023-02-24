/* Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que
   inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo. */

#include <stdio.h>
#include <locale.h>

union tipo_basico {
    int n;
    char c;
} dado;

int main() {
    setlocale(LC_ALL, "");

    printf("Digite um número inteiro entre 65 e 90: ");
    scanf("%d", &dado.n);

    /* Devido a union e a entrada de dados ser do tipo inteiro e entre 65 e 90,
       será impresso uma letra entre A e Z */

    printf("%c\n", dado.c);

    return 0;
}