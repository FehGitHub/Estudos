/* Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, 
   calcule e mostre o número formado pelos dígitos invertidos do número lido. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &x);

    y = (x % 10) * 100;
    x = x / 10;

    y += (x % 10) * 10;
    x = x / 10;

    y += x % 10;

    printf("%d\n", y);

    return 0;
}