/* Faça um programa que leia uma string e a inverta. A string invertida deve ser
   armazenada na mesma variável. Em seguida, imprima a string invertida. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50], c_1, c_2;
    int tamanho;

    printf("Digite um frase ou palavra: ");
    fgets(str, 50, stdin);

    tamanho = strlen(str);

    // tamanho - 2 : calcula quantos caracteres existem na string, excluindo o caractere '\n'
    // str[tamanho - 2 - i] : acessa o ultimo caractere da string - i, excluindo o caractere '\n'

    for(int i = 0; i < ((tamanho - 2) / 2.0); i++) {
        c_1 = str[i];
        c_2 = str[tamanho - 2 - i];

        str[i] = c_2;
        str[tamanho - 2 - i] = c_1;
    }

    printf("%s\n", str);

    return 0;
}