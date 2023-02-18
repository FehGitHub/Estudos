/* Faça um programa que receba um número inteiro maior do que 1 e
   verifique se o número fornecido é primo ou não. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int possivel_p, p, nao_p, div;

    printf("Digite o número para verificar se ele é primo: ");
    scanf("%d", &possivel_p);

    div = possivel_p - 1;

    while(div >= 1) {
        if(possivel_p % div == 0) {
            if(div != 1) {
                nao_p = possivel_p;
                printf("O número %d não é primo\n", nao_p);
                break;
            }
            else {
                p = possivel_p;
                printf("O número %d é primo\n", p);
            }
        }

        div--;
    }

    return 0;
}