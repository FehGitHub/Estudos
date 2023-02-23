/* Faça um programa que leia uma string e imprima uma mensagem
   dizendo se ela é um palíndromo ou não. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50];
    int tamanho;

    printf("Digite um frase ou palavra para saber se é palíndromo ou não: ");
    fgets(str, 50, stdin);

    tamanho = strlen(str) - 1; //ignora o caractere '\n'

    int i = tamanho - 1;    // Índice do ultimo caractere da string 
    int j = 0;  // Índice do primeiro caractere da string

    for( ; i >= 0; i--, j++) {
        if(str[i] != str[j]) {
            printf("Não é palíndromo\n");
            break;
        }
        else if(i == 0) {
            printf("É palíndromo\n");
        }
    }

    return 0;
}