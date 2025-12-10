//Faça um programa que leia dois números inteiros do teclado e imprima a soma deles.
#include <stdio.h>
int main() {
    int num1, num2, soma;

    // Solicita ao usuário que insira dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcula a soma dos dois números
    soma = num1 + num2;

    // Imprime o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}