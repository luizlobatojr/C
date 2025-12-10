//Leia dois números e diga qual é o maior (trate também o caso sejam iguais).
#include <stdio.h>
int main() {
    double num1, num2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Compara os dois números e determina qual é o maior ou se são iguais
    if (num1 > num2) {
        printf("O maior número é: %.2lf\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %.2lf\n", num2);
    } else {
        printf("Os dois números são iguais: %.2lf\n", num1);
    }

    return 0;
}