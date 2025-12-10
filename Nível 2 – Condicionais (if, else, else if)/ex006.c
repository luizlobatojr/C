//Leia um número e diga se ele é positivo, negativo ou zero.
#include <stdio.h>
int main() {
    double numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%lf", &numero);

    // Verifica se o número é positivo, negativo ou zero
    if (numero > 0) {
        printf("O número %.2lf é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %.2lf é negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}