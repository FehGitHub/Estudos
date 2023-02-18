/* Escreva um programa que leia um número inteiro e calcule a soma de todos os
   divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores
   do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, div = 1, soma_div = 0;

    printf("Digite um número para somar seus divisores: ");
    scanf("%d", &n);

    while(div != n) {
        if(n % div == 0) {
            soma_div += div;
        }

        div++;
    }

    printf("Soma dos divisores de %d: %d\n", n, soma_div);

    return 0;
}