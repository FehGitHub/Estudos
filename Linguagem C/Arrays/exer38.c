/* O código de César é uma das técnicas de criptografia mais simples e conhecidas.
   É um tipo de substituição no qual cada letra do texto é substituída por outra,
   que se apresenta n posições após ela no alfabeto. Escreva um programa que faça
   uso desse código de César para três posições.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50], c;

    printf("Digite uma palavra ou frase: ");
    fgets(str, 50, stdin);

    for(int i = 0; str[i] != '\n'; i++) {
        c = str[i];
        c += 3;
        str[i] = c;
    }

    printf("Nova palavra/frase: %s", str);

    return 0;
}