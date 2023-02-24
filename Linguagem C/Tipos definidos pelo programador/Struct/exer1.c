/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
   esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct cadastro {
    char endereco[50], nome[50];
    int idade;
} cad_1;

int main() {
    setlocale(LC_ALL, "");

    printf("Nome: ");
    fgets(cad_1.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &cad_1.idade);
    getchar(); // consome o caractere de nova linha

    printf("Endereço: ");
    fgets(cad_1.endereco, 50, stdin);

    printf("\n");
    printf("%s", cad_1.nome);
    printf("%d\n", cad_1.idade);
    printf("%s", cad_1.endereco);

    return 0;
}