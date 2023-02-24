/* Crie uma enumeração representando os dias da semana. Agora, escreva um programa
   que leia um valor inteiro do teclado e exiba o dia da semana correspondente. */

#include <stdio.h>
#include <locale.h>

enum dia_semana {
    domingo = 1, segunda, terca, quarta, quinta, sexta, sabado,
} dia;

int main() {
    setlocale(LC_ALL, "");

    int dia; 

    printf("Digite um número inteiro de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case domingo:
            printf("Domingo\n");
            break;
        case segunda:
            printf("Segunda-feira\n");
            break;
        case terca:
            printf("Terça-feira\n");
            break;
        case quarta:
            printf("Quarta-feira\n");
            break;
        case quinta:
            printf("Quinta-feira\n");
            break;
        case sexta:
            printf("Sexta-feira\n");
            break;
        case sabado:
            printf("Sábado\n");
            break;
        default:
            printf("Número fora do intervalo!\n");
            break;       
    }  

    return 0;
}