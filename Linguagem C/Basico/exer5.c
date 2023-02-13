/* Faça um programa que leia um valor do tipo float e depois o imprima
   usando o operador “%d”. Veja o que aconteceu. */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");

   float x;

   printf("Digite um número real: ");
   scanf("%f", &x);

   printf("%d", x);

   return 0;
}