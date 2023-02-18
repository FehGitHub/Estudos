/* Escreva um programa que leia do teclado um vetor de 10 posições.
   Escreva na tela quantos valores pares foram armazenados nesse vetor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[10], par = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0) {
            par++;
        }
    }

    printf("Valores pares: %d\n", par);

    return 0;
}