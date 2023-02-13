/* Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas
   duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”. */

#include <stdio.h>

int main() {
   char c;

   printf("Digite uma letra: ");
   scanf("%c", &c);

   printf("\"%c\"\n", c);

   return 0;
}