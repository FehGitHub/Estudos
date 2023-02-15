/* Faça um programa que leia o salário de um trabalhador e o valor da prestação
   de um empréstimo. Se a prestação:

    • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
    • Caso contrário, imprima: “Empréstimo concedido.” */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, parc_empr;

    printf("Sálario: ");
    scanf("%f", &salario);

    printf("Parcela do empréstimo: ");
    scanf("%f", &parc_empr);

    if((salario * 0.2) < parc_empr) {
        printf("Empréstimo não concedido\n");
    }
    else printf("Empréstimo concedido\n");

    return 0;
}