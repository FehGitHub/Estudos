/* Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 
   e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
   segunda-feira, se 2, e assim por diante. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        case 1:
            printf("Domingo\n");
            break;
        default:
            printf("Fora de intervalo\n");
            break;
    }

    return 0;
}