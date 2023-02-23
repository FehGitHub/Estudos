/* Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
   Entre com um caractere (vogal ou consoante) e substitua todas as vogais da 
   palavra dada por esse caractere. Ao final, imprima a nova string e o número 
   de vogais que ela possui. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char str[50], c;
    int conta_vogal = 0, i = 0;

    printf("Digite uma frase ou palavra: ");
    fgets(str, 50, stdin);

    printf("Digite um vogal ou consoante: ");
    scanf("%c", &c);

    while(str[i] != '\n') {
        if(str[i] == 'a' || str[i] == 'A') {
            str[i] = c;
        }
        else if(str[i] == 'e' || str[i] == 'E') {
            str[i] = c;
        }
        else if(str[i] == 'i' || str[i] == 'I') {
            str[i] = c;
        }
        else if(str[i] == 'o' || str[i] == 'O') {
            str[i] = c;
        }
        else if(str[i] == 'u' || str[i] == 'U') {
            str[i] = c;
        }

        i++;
    }

    i = 0;

    while(str[i] != '\n') {
        if(str[i] == 'a' || str[i] == 'A') {
            conta_vogal++;
        }
        else if(str[i] == 'e' || str[i] == 'E') {
            conta_vogal++;
        }
        else if(str[i] == 'i' || str[i] == 'I') {
            conta_vogal++;
        }
        else if(str[i] == 'o' || str[i] == 'O') {
            conta_vogal++;
        }
        else if(str[i] == 'u' || str[i] == 'U') {
            conta_vogal++;
        }

        i++;
    }

    printf("Nova string: %s", str);
    printf("Número de vogais: %d\n", conta_vogal);

    return 0;
}