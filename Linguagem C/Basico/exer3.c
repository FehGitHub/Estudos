/* Escreva um programa que leia um número inteiro e depois imprima
   a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um
   comando printf(). */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");

   int x;

   printf("Digite um número inteiro: ");
   scanf("%d", &x);

   printf("Valor lido: %d\n", x);

   return 0;
}