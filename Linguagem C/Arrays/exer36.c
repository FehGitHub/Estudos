/* Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
   Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule
   o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do
   desconto e o valor a ser pago à vista. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char mercadoria[30];
    float preco, desconto, pag_vista;

    printf("Nome da mercadoria: ");
    fgets(mercadoria, 30, stdin);

    printf("Preço: ");
    scanf("%f", &preco);

    desconto = preco * 0.1;
    pag_vista = preco - desconto;

    printf("\n");
    printf("Mercadoria: %s", mercadoria);
    printf("Valor total: R$%.2f\n", preco);
    printf("Desconto: R$%.2f\n", desconto);
    printf("Valor a ser pago à vista: R$%.2f\n", pag_vista);
    
    return 0;
}