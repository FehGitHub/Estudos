/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
   seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):

    • Homens: (72,7 * h) – 58
    • Mulheres: (62,1 * h) – 44,7 */

#include <stdio.h>

int main() {
    float h, peso_ideal;
    char sexo;

    printf("Altura: ");
    scanf("%f", &h);

    printf("Sexo (M//F): ");
    scanf(" %c", &sexo);

    switch(sexo) {
        case 'M':
            peso_ideal = (72.7 * h) - 58;
            printf("Peso ideal: %.2f kg\n", peso_ideal);
            break;
        case 'F':
            peso_ideal = (62.1 * h) - 44.7;
            printf("Peso ideal: %.2f kg\n", peso_ideal);
            break;
    }

    return 0;
}