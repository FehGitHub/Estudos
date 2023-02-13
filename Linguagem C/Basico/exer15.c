/* Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as
   de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal
   e uma em cada linha. Use um único comando printf() para cada operação de escrita
   das três variáveis. */

#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");
   
   char c;
   int i;
   float f;

   printf("Digite uma letra: ");
   scanf("%c", &c);

   printf("Digite um número: ");
   scanf("%d", &i);

   printf("Digite um número real: ");
   scanf("%f", &f);

   printf("%c %i %f\n", c, i, f);
   printf("%c\t%i\t%f\n", c, i, f);
   printf("%c\n%i\n%f\n", c, i, f);

   return 0;
}