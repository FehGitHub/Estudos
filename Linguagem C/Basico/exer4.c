/* Faça um programa que leia um número inteiro e depois o imprima
   usando o operador “%f”. Veja o que aconteceu. */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");

   int x;

   printf("Digite um número inteiro: ");
   scanf("%d", &x);

   printf("%f", x);

   return 0;
}