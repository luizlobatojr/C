//Faça o mesmo do exercício 4, mas agora com números reais (float ou double).
#include <stdio.h>
int main() {
    double num1, num2, soma;

    // Solicita ao usuário que insira dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número real: ");
    scanf("%lf", &num2);

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Imprime o resultado
    printf("A soma de %.2lf e %.2lf é: %.2lf\n", num1, num2, soma);

    return 0;
}