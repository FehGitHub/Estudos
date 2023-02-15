/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:

    • O número digitado ao quadrado.
    • A raiz quadrada do número digitado. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x;

    printf("Digite um número: ");
    scanf("%f", &x);

    if(x > 0) {
        printf("%.3f\n", pow(x, 2));
        printf("%.3f\n", sqrt(x));
    }

    return 0;
}