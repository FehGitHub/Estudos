/* Elabore um programa que contenha uma constante qualquer do tipo float.
   Use o comando #define. Imprima essa constante. */

#include <stdio.h>

int main() {
   #define x 10.1

   printf("%f\n", x);

   return 0;
}