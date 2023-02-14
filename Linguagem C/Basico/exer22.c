/* Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
   imprima o valor correspondente em dólares. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float reais, cot_dolar, dolar;

    printf("R$: ");
    scanf("%f", &reais);

    printf("Cotação do dólar: ");
    scanf("%f", &cot_dolar);

    dolar = reais / cot_dolar;

    printf("Total em $: %.2f\n", dolar);

    return 0;
}