/*  Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
    Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
    da pessoa mais velha. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int ano_nasc;
    int mes_nasc;
    int dia_nasc;
} pessoa[6];

int main() {
    setlocale(LC_ALL, "");

    int mais_velha_ano, mais_velha_mes, mais_velha_dia, mais_velha_pos;

    for(int i = 0; i < 6; i++) {
        printf("Nome da pessoa %d: ", i+1);
        fgets(pessoa[i].nome, 50, stdin);

        printf("Data de nascimento (dd/mm/aa): ");
        scanf("%d/%d/%d", &pessoa[i].dia_nasc, &pessoa[i].mes_nasc, &pessoa[i].ano_nasc);
        getchar();
        printf("\n");
    }

    // Assume que a pessoa mais velha é a primeira, para fins de comparação

    mais_velha_ano = pessoa[0].ano_nasc;
    mais_velha_mes = pessoa[0].mes_nasc;
    mais_velha_dia = pessoa[0].dia_nasc;

    mais_velha_pos = 0; // Posição da pessoa mais velha no vetor pessoa

    // Determina quem é a pessoa mais velha e sua posição no vetor pessoa

    for(int i = 1; i < 6; i++) {
        if(mais_velha_ano > pessoa[i].ano_nasc) {
            mais_velha_ano = pessoa[i].ano_nasc;
            mais_velha_mes = pessoa[i].mes_nasc;
            mais_velha_dia = pessoa[i].dia_nasc;

            mais_velha_pos = i;
        }
        else if(mais_velha_ano == pessoa[i].ano_nasc && mais_velha_mes > pessoa[i].mes_nasc) {
            mais_velha_ano = pessoa[i].ano_nasc;
            mais_velha_mes = pessoa[i].mes_nasc;
            mais_velha_dia = pessoa[i].dia_nasc;

            mais_velha_pos = i;
        }
        else if(mais_velha_mes == pessoa[i].mes_nasc && mais_velha_ano == pessoa[i].ano_nasc && mais_velha_dia > pessoa[i].dia_nasc) {
            mais_velha_ano = pessoa[i].ano_nasc;
            mais_velha_mes = pessoa[i].mes_nasc;
            mais_velha_dia = pessoa[i].dia_nasc;

            mais_velha_pos = i;
        }
     }

    printf("Pessoa mais velha: %s", pessoa[mais_velha_pos].nome);

    return 0;
}