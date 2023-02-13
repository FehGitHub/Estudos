/* Elabore um programa que escreva as mensagens “Início do programa” 
   e “Fim” na tela, uma em cada linha, usando apenas um comando printf(). */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Início do programa\nFim\n");

    return 0;
}