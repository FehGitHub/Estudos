/* Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números
   naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int v[100], i = 0, n = 0;


    while(i < 100) {    // A variável i, além de ser usada no índice do vetor, também é um contador
        if(n % 7 == 0) {
            v[i] = n;

            i++;
        }

        n++;
    }

    i = 0;  // Volta ao inicio do vetor

    while(i < 100) {
        printf("%d: %d\n", i + 1, v[i]);
        i++;
    }

    return 0;
}