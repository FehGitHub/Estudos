/* Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x, y, z, h, media;

    printf("Digite 4 números reais separados por backspace: ");
    scanf("%f %f %f %f", &x, &y, &z, &h);

    media = (x + y + z + h) / 4;

    printf("Média: %.3f\n", media);

    return 0;
} 