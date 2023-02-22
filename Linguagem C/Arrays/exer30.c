/* Faça um programa que leia uma string e a imprima de trás para a frente. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50];
    int tamanho;

    printf("Digite um frase ou palavra: ");
    fgets(str, 50, stdin);

    tamanho = strlen(str);
    tamanho = tamanho - 1;  // Ignora o caractere '\n'

    for(int i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}