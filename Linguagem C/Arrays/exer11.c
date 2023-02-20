/* Faça um programa que leia um vetor de 10 posições.
   Verifique se existem valores iguais e os escreva na tela. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%f", &v[i]);
    }

    for(int i = 0; i < 10; i++) {

        for(int j = 0; j < 10; j++) {
            if(v[i] == v[j] && i != j) {
                printf("%f\n", v[j]);
                break;
            }
        }

    }

    return 0;
}