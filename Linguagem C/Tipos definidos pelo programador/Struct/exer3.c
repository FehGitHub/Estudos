/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
   conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
   escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura.
   Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct cad_aluno {
    int matricula;
    char nome[50];
    float nota[3];
    float media;
} aluno[5];

int main() {

    float media, maior_media;
    float soma = 0;
    int aluno_maior_media;

    for(int i = 0; i < 5; i++) {
        printf("Número da matrícula do %dº aluno: ", i+1);
        scanf("%d", &aluno[i].matricula);
        getchar();

        printf("Nome do %dº aluno: ", i+1);
        fgets(aluno[i].nome, 50, stdin);

        for(int j = 0; j < 3; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &aluno[i].nota[j]);

            soma += aluno[i].nota[j];
        }

        aluno[i].media = soma / 5;  // Calcula a média do aluno i
        media += aluno[i].media;    // Soma a média de cada aluno
        soma = 0; // Zera para calcular a media do proxímo aluno

        printf("\n");
    }

    media = media / 5;  // Divide a soma da média dos alunos pelo núnero de alunos
    maior_media = aluno[0].media;   // Assume que a maior nota é a do primeiro aluno para fins de comparação
    aluno_maior_media = 0; // Aluno que possui a maior média (índice)

    // Analisa qual aluno possui de fato a maior média

    for(int i = 0; i < 5; i++) {
        if(maior_media < aluno[i].media) {
            maior_media = aluno[i].media;
            
            aluno_maior_media = i;
        }
    }

    printf("Aluno com maior média: %s", aluno[aluno_maior_media].nome);

    for(int i = 0; i < 3; i++) {
        printf("Nota na prova %d: %.2f\n", i+1, aluno[aluno_maior_media].nota[i]);
    }

    return 0;
}
