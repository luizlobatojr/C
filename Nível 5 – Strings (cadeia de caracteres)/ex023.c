//Leia uma frase e conte quantas vogais (a e i o u) ela tem.
#include <stdio.h>
#include <string.h>
#define MAX 200
int contarVogais(char str[]) {
    int contador = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }
    return contador;
}
int main() {
    char frase[MAX];
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
    // Remover o caractere de nova linha, se presente
    frase[strcspn(frase, "\n")] = 0;
    int totalVogais = contarVogais(frase);
    printf("A frase contém %d vogais.\n", totalVogais);
    return 0;
}