/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
   Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das
   coordenadas, isto é, a posição (0,0). */

#include <stdio.h>
#include <locale.h>
#include <math.h>

struct ponto {
    float x, y;
} ponto_1;

int main() {
    setlocale(LC_ALL, "");

    float distancia;

    printf("Coordenada do ponto x: ");
    scanf("%f", &ponto_1.x);

    printf("Coordenada do ponto y: ");
    scanf("%f", &ponto_1.y);

    distancia = pow((0 - ponto_1.x), 2) + pow((0 - ponto_1.y), 2);
    distancia = sqrt(distancia);

    printf("Distância entre o ponto e a origem: %f\n", distancia);

    return 0;
}