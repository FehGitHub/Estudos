/* Faça um programa que mostre ao usuário um menu com quatro opções de operações
   matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
   o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x, y, resultado;
    int op;

    printf("Digite 1 para realizar um adição (x + y)\n");
    printf("Digite 2 para realizar um subtração (x - y)\n");
    printf("Digite 3 para realizar um multiplicação (x * y)\n");
    printf("Digite 4 para realizar um divisão (x / y)\n");

    printf("\nOperação a ser realizada: ");
    scanf("%d", &op);

    printf("\nVariável x: ");
    scanf("%f", &x);

    printf("Variável y: ");
    scanf("%f", &y);

    switch(op) {
        case 1:
            resultado = x + y;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            resultado = x / y;
            printf("\nResultado: %.2f\n", resultado);
            break;
        default:
            printf("\nOperação inválida\n");
            break;
    }
    
    return 0;
}