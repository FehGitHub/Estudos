/* Faça um programa que leia dois números e mostre o maior deles. Se, por acaso,
   os dois números forem iguais, imprima a mensagem “Números iguais”. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x, y;

    printf("Digite um número: ");
    scanf("%f", &x);

    printf("Digite outro número: ");
    scanf("%f", &y);

    if(x > y) {
        printf("Maior: %.2f\n", x);
    } 
    else if( x == y) {
        printf("Números iguais\n");
    }
    else printf("Maior: %.2f\n", y);

    return 0;
}