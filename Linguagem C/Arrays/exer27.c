/* Faça um programa que leia uma string e a imprima na tela. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50];

    printf("Digite uma frase ou palavra: ");
    fgets(str, 50, stdin);

    printf("Frase digitada: %s\n", str);

    return 0;
}