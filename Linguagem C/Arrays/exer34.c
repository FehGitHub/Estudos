/* Construa um programa que leia duas strings do teclado. Imprima uma mensagem
   informando se a segunda string lida está contida dentro da primeira. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str_1[50], str_2[50];
    int tam_str_1, tam_str_2, igual, j;

    printf("Digite uma frase ou palavra: ");
    fgets(str_1, 50, stdin);

    printf("Digite uma frase ou palavra: ");
    fgets(str_2, 50, stdin);

    tam_str_1 = strlen(str_1);  
    tam_str_2 = strlen(str_2);

    for(int i = 0; i < tam_str_1; i++) {
        if(str_1[i] == '\n') {
                printf("A segunda string lida não está contida na primeira\n");
                break;
        }

        j = 0; // Índice da segunda string
        igual = 1;  // Mantem o loop 

        while(igual == 1) {
            if(str_2[j] == '\n') {
                printf("A segunda string lida está contida na primeira\n");
                break;
            }
            else if(str_1[i + j] == str_2[j]) {
                j++;
            }
            else {
                igual = 0;
            }
        }
    }

    return 0;
}
