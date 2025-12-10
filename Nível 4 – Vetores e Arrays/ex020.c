//Faça um programa que inverta um vetor de 10 posições (primeiro vira último, etc).
#include <stdio.h>
int main() {
    int vetor[10];
    int vetor_invertido[10];

    // Leitura dos números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inversão do vetor
    for (int i = 0; i < 10; i++) {
        vetor_invertido[i] = vetor[9 - i];
    }

    // Impressão do vetor invertido
    printf("Vetor invertido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor_invertido[i]);
    }

    return 0;
}