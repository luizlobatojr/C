//Leia uma palavra e diga se ela é palíndromo (ex: “arara”, “ovo”, “radar”).
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100
bool ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}
int main() {
    char palavra[MAX];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra)) {
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}