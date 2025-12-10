//Leia 3 números e imprima eles em ordem crescente.
#include <stdio.h>
int main() {
    double num1, num2, num3, temp;

    // Solicita ao usuário que insira três números
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    // Ordena os números em ordem crescente usando o método de bolha
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Imprime os números em ordem crescente
    printf("Números em ordem crescente: %.2lf, %.2lf, %.2lf\n", num1, num2, num3);

    return 0;
}