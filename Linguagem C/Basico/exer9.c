/* Faça um programa que leia dois valores do tipo float. Use um único comando de 
   leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
   eles foram lidos. */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");

   float x, y;

   printf("Digite dois números reais separados por backspace: ");
   scanf("%f %f", &x, &y);

   printf("%f %f", y, x);

   return 0;
}