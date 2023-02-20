/* Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado
   de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm,
   no máximo, 5 elementos. Imprima os dois conjuntos de números. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float v[5], v_q[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%f", &v[i]);

        v_q[i] = pow(v[i], 2);
    }

    for(int i = 0; i < 5; i++) {
        printf("Raiz quadrada de %f: %f\n", v[i], v_q[i]);
    }

    return 0;
}