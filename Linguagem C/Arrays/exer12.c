/*  Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
    Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que,
    caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele 
    para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado
    no vetor, verificando se ele existe entre os números que já foram fornecidos. 
    Exiba na tela o vetor final que foi digitado. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[10];
    int i = 0, j = 0;

    for(; i < 10; i++) {
        printf("Digite um número cujo qual ainda não foi informado: ");
        scanf("%f", &v[i]);

        // Compara todos os valores digitados

        while(j < i) {
            if(v[j] == v[i]) {
                printf("\nVocê já informou esse número.\nInforme outro: ");
                scanf("%f", &v[i]);

                j = 0; // Reseta a variável para compara todos os valores digitados
            } 

            else j++;
        }

        j = 0;
    }

    return 0;
}