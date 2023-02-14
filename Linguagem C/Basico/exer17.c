/* Faça um programa que leia um número real e imprima a quinta parte desse número. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float x, y;

    printf("Digite um número real: ");
    scanf("%f", &x);

    y = x * 0.20;

    printf("%.2f\n", y);

    return 0;
}