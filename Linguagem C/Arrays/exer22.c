/*  Leia uma matriz de tamanho 5 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule
    escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior
    nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float m[5][3], menor_nota;
    int p_1 = 0, p_2 = 0, p_3 = 0;  // Provas 1, 2 e 3
    int menor_nota_pos; // Posição da menor nota na matriz

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }

        printf("\n");
    }

    for(int i = 0; i < 5; i++) {
        // Assume que a menor nota de cada aluno é a da prova 1

        menor_nota = m[i][0];
        menor_nota_pos = 0;

        for(int j = 0; j < 3; j++) {
            // Analisa qual a prova com a menor nota e sua posição na matriz

            if(menor_nota > m[i][j]) {
                menor_nota = m[i][j];
                menor_nota_pos = j;
            }
        }

        // Adiciona 1 na prova que possui a menor nota
        
        switch(menor_nota_pos) {
            case 0:
                p_1++;
                break;
            case 1:
                p_2++;
                break;
            case 2:
                p_3++;
                break;
            default:
                break;
        }
    }

    printf("Número de alunos com pior nota na prova 1: %d\n", p_1);
    printf("Número de alunos com pior nota na prova 2: %d\n", p_2);
    printf("Número de alunos com pior nota na prova 3: %d\n", p_3);

    return 0;
}