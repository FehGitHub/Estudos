/* Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos
   desse vetor e imprima o vetor na tela. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[10], maior, menor;
    int i = 0, j = 0;

    while(i < 10) {
        printf("Digite um valor: ");
        scanf("%f", &v[i]);

        i++;
    }

    i = 0; // Reseta a variável

    // Ordena do menor para o maior

    while(i < 10) {
        while(j < i) {
            if(v[j] > v[i]) {

                maior = v[j];
                menor = v[i];

                v[i] = maior;
                v[j] = menor;

                j = 0;
            }

            else j++;
        }

        j = 0;
        i++;
    }

    i = 0; // Reseta a variável

    printf("\n");

    while(i < 10) {
        printf("%f\n", v[i]);

        i++;
    }

    return 0;
}