/* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
   conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float g, r;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &g);

    r = g * (3.141592/180);

    printf("Ângulo em radianos: %f\n", r);

    return 0;
}