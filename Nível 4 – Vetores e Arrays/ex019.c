//Leia 5 notas, guarde em um vetor e calcule a média da turma.
#include <stdio.h>
int main() {
    float notas[5];
    float soma = 0.0, media;
    // Leitura das notas
    for (int i = 0; i < 5; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    // Cálculo da média
    media = soma / 5;
    // Impressão da média
    printf("Média da turma: %.2f\n", media);
    return 0;
}