//Leia seu nome completo e imprima quantos caracteres ele tem (use strlen ou conte manualmente).
#include <stdio.h>
#include <string.h>
int main() {
    char nome[100];
    int comprimento;

    // Leitura do nome completo
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remover o caractere de nova linha, se presente
    nome[strcspn(nome, "\n")] = 0;

    // Cálculo do comprimento do nome
    comprimento = strlen(nome);

    // Impressão do comprimento do nome
    printf("Seu nome completo tem %d caracteres.\n", comprimento);

    return 0;
}