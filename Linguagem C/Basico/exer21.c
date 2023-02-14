/*  Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida
    em m/s (metros por segundo). A fórmula de conversão é M = K/3,6, sendo K a
    velocidade em km/h e M em m/s. */

#include <stdio.h>

int main() {
    float km, ms;

    printf("Digite a velocidade em km: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("Metros por segundo: %.4f\n", ms);

    return 0;
}