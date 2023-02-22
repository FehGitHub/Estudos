/* Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50], conta_letra = 0;

    printf("Digite uma frase ou palavra: ");
    fgets(str, 50, stdin);

    printf("As 4 primeiras letras são: ");

    for(int i = 0; conta_letra < 4; i++) {
        if(str[i] != ' ') {
            printf("%c", str[i]);
            conta_letra++;
        }
    }

    printf("\n");

    return 0;
}