/* Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    printf("Digite um número: ");
    scanf("%f", &x);

    printf("Digite outro número: ");
    scanf("%f", &y);

    z = x >= y ? x:y;

    printf("Maior: %.2f\n", z);

    return 0;
}