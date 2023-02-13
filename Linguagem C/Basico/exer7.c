/* Elabore um programa que leia um caractere e depois o imprima
   como um valor inteiro. */

#include <stdio.h>

int main() {

   char c;

   printf("Digite uma letra: ");
   scanf("%c", &c);

   printf("%d\n", c);

   return 0;
}