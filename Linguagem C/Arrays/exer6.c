/* Faça um programa que receba do usuário um vetor X com 10 posições. 
   Em seguida deverão ser impressos o maior e o menor elemento desse vetor. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[10], maior, menor;

    printf("Digite um número: ");
    scanf("%f", &v[0]);

    // Assume que o maior e menor valor é o primeiro valor digitado pelo usuário

    maior = v[0];
    menor = v[0];

    // Recebe os demais valores e os compara com o maior e menor valor

    for(int i = 1; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%f", &v[i]);

        if(maior < v[i]) {
            maior = v[i];
        }
        else if(menor > v[i]) {
            menor = v[i];
        }
    }

    printf("Maior valor: %f\n", maior);
    printf("Menor valor: %f\n", menor);

    return 0;
}