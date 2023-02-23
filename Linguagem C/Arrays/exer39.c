/* Escreva um programa que leia duas strings e as imprima em ordem alfabética,
   a ordem em que elas apareceriam em um dicionário. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str_1[30], str_2[30];
    int i = 0;

    printf("Digite uma palavra: ");
    fgets(str_1, 30, stdin);

    printf("Digite outra palavra: ");
    fgets(str_2, 30, stdin);

    while(1) {
        if(str_1[i] < str_2[i]) {
            printf("%s", str_1);
            break;
        }
        else if(str_1[i] > str_2[i]) {
            printf("%s", str_2);
            break;
        }
        else {
            i++;
        }
    }

    return 0;
}