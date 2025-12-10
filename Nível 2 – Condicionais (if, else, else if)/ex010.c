//Simulador de calculadora simples: leia dois números e um caractere (+ - * /) e faça a operação escolhida.
#include <stdio.h>
int main() {
    double num1, num2, resultado;
    char operador;

    // Solicita ao usuário que insira dois números e um operador
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // Realiza a operação com base no operador fornecido
    if (operador == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operador == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operador == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2lf\n", resultado);
    } else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2lf\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else {
        printf("Operador inválido! Por favor, use +, -, * ou /.\n");
    }

    return 0;
}