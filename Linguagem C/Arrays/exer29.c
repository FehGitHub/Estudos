/*  Sem usar a função strlen(), faça um programa que leia
    uma string e imprima quantos caracteres ela possui. */

    // O programa ignora os caracteres ' ' e '\n'
    
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50];
    int  conta_char = 0, i = 0;

    printf("Digite um frase ou palavra: ");
    fgets(str, 50, stdin);

    while(str[i] != '\n') {
        if(str[i] != ' ') {
            conta_char++;
        }
        
        i++;
    }

    printf("Existem %d caracteres na string\n", conta_char);

    return 0;
}