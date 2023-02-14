/* Faça um programa que calcule o ano de nascimento de uma pessoa a partir de
   sua idade e do ano atual. */

//Nao foram considerados anos bissextos, dia e mes de nascimento

#include <stdio.h>

int main() {
   int ano_atual, ano_nasc, idade;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   printf("Digite o ano atual: ");
   scanf("%d", &ano_atual);

   ano_nasc = ano_atual - idade;

   printf("Seu ano de nascimento é %d\n", ano_nasc);

   return 0;
}