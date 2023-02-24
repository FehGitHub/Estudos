/* Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo.
   Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora */

#include <stdio.h>
#include <locale.h>

struct hora {
    int hrs;
    int min;
    int seg;
} hora[5];

int main() {
    setlocale(LC_ALL, "");

    int total_seg[5] = {0, 0, 0, 0, 0}; // Guarda o total em seg de cada hora
    int maior_hrs, maior_hrs_posicao;   // Guarda a maior hora e sua posição dentro do vetor hora

    for(int i = 0; i < 5; i++) {
        printf("Horas (hh:mm:ss): ");
        scanf("%d:%d:%d", &hora[i].hrs, &hora[i].min, &hora[i].seg);

        total_seg[i] += hora[i].hrs * 3600; // Horas convertidas em segundos
        total_seg[i] += hora[i].min * 60;   // Minutos convertidos em segundos
        total_seg[i] += hora[i].seg;
    }

    maior_hrs = total_seg[0];
    maior_hrs_posicao = 0;

    for(int i = 0; i < 5; i++) {
        if(maior_hrs < total_seg[i]) {
            maior_hrs = total_seg[i];
            maior_hrs_posicao = i;
        }
    }

    printf("Maior hora: %d:%d:%d\n", hora[maior_hrs_posicao].hrs, hora[maior_hrs_posicao].min, hora[maior_hrs_posicao].seg);

    return 0;
}
