//Leia uma nota de 0 a 10 e imprima “Aprovado” se ≥ 7, “Recuperação” se ≥ 5 e < 7, “Reprovado” se < 5.
#include <stdio.h>
int main() {
    double nota;

    // Solicita ao usuário que insira uma nota
    printf("Digite a nota (0 a 10): ");
    scanf("%lf", &nota);

    // Verifica se a nota está dentro do intervalo válido
    if (nota < 0 || nota > 10) {
        printf("Nota inválida! Por favor, insira uma nota entre 0 e 10.\n");
    } else {
        // Determina a situação com base na nota
        if (nota >= 7) {
            printf("Aprovado\n");
        } else if (nota >= 5) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}   