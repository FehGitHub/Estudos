/* Escreva um programa que leia uma string do teclado e converta todos os seus
   caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII 
   está entre 97 e 122. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50];
    int i = 0;

    printf("Digite um frase ou palavra: ");
    fgets(str, 50, stdin);

    while(str[i] != '\n') {
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }

        i++;
    }

    printf("\n%s", str);

    return 0;
}