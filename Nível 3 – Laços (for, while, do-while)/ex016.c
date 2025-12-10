//Faça um programa que conte quantos números pares e ímpares existem entre 1 e um número que o usuário digitar.
#include <stdio.h>
int main() {
    int limite, i;
    int count_pares = 0;
    int count_impares = 0;

    // Solicita ao usuário que insira o número limite
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &limite);

    // Loop para contar números pares e ímpares entre 1 e o número fornecido
    for (i = 1; i <= limite; i++) {
        if (i % 2 == 0) {
            count_pares++;
        } else {
            count_impares++;
        }
    }

    // Imprime o resultado da contagem
    printf("Entre 1 e %d, existem %d números pares e %d números ímpares.\n", limite, count_pares, count_impares);

    return 0;
}