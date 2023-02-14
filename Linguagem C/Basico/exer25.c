/* Faça um programa que converta uma letra maiúscula em letra minúscula. 
   Use a tabela ASCII para isso. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char c, novo_c;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &c);

    novo_c = c + 32;

    printf("Letra minúscula: %c\n", novo_c);

    return 0;
}