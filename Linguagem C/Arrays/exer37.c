/* Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j.
   Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char s[50];
    int i, j, tamanho;

    printf("Digite uma frase ou palavra: ");
    fgets(s, 50, stdin);

    tamanho = strlen(s);

    printf("Digite um número entre 1 e %d: ", tamanho - 1);
    scanf("%d", &i);

    printf("Digite um número entre %d e %d: ", i, tamanho - 1);
    scanf("%d", &j);

    i -= 1;
    j -= 1;

    while(i <= j) {
        printf("%c", s[i]);
        i++;
    }

    printf("\n");

    return 0;
}