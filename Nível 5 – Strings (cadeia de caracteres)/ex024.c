//Leia uma frase e transforme todas as letras minúsculas em maiúsculas (ou vice-versa).
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 200
void transformarCaixa(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    char frase[MAX];
    printf("Digite uma frase: ");
    fgets(frase, MAX, stdin);
    // Remover o caractere de nova linha, se presente
    frase[strcspn(frase, "\n")] = 0;
    transformarCaixa(frase);
    printf("Frase transformada: %s\n", frase);
    return 0;
}
