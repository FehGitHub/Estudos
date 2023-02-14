/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a
   convertida em graus Fahrenheit */

#include <stdio.h>

int main() {
   float c, f;

   printf("Digite a temp. em graus Celsius: ");
   scanf("%f", &c);

   f = c * 1.8 + 32;

   printf("Temperatura em Fahrenheit: %.3f\n", f);

   return 0;
}