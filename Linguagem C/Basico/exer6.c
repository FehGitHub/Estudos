/* Faça um programa que leia um valor do tipo double e depois o imprima
   na forma de notação científica */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");

   double x;

   printf("Digite um número real: ");
   scanf("%lf", &x);

   printf("%e", x);

   return 0;
}