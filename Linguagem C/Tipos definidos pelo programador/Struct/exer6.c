/*  Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte,
    idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os 
    nomes do atleta mais alto e do mais velho. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct atleta {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} atleta[5];

int main() {
    setlocale(LC_ALL, "");

    int mais_alto_pos, mais_velho_pos;
    float altura_mais_alto, idade_mais_velho;

    for(int i = 0; i < 5; i++) {
        printf("Nome do atleta %d: ", i+1);
        fgets(atleta[i].nome, 50, stdin);

        printf("Esporte praticado: ");
        fgets(atleta[i].esporte, 30, stdin);

        printf("Idade do atleta: ");
        scanf("%d", &atleta[i].idade);

        printf("Altura: ");
        scanf("%f", &atleta[i].altura);
        getchar();

        printf("\n");
    }

    altura_mais_alto = atleta[0].altura;
    mais_alto_pos = 0;

    idade_mais_velho = atleta[0].idade;
    mais_velho_pos = 0;

    for(int i = 0; i < 5; i++) {
        if(altura_mais_alto < atleta[i].altura) {
            altura_mais_alto = atleta[i].altura;
            mais_alto_pos = i;
        }

        if(idade_mais_velho < atleta[i].idade) {
            idade_mais_velho = atleta[i].idade;
            mais_velho_pos = i;
        }
    }

    printf("Atleta mais velho: %s", atleta[mais_velho_pos].nome);
    printf("Atleta mais alto: %s", atleta[mais_alto_pos].nome);

    return 0;
}