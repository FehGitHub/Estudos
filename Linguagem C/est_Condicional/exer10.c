/* Faça um programa para verificar se determinado número inteiro lido é divisível
   por 3 ou 5, mas não simultaneamente pelos dois. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x % 3 == 0 && x % 5 != 0){
        printf("O número é divisivel por 3\n");
    }
    else if(x % 3 != 0 && x % 5 == 0) {
        printf("O número é divisivel por 5\n");
    }

    return 0;
}