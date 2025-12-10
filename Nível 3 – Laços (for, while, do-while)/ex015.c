//Faça um programa que calcule o fatorial de um número (ex: 5! = 120).
#include <stdio.h>
int main() {
    int numero, i;
    unsigned long long fatorial = 1;

    // Solicita ao usuário que insira um número para calcular o fatorial
    printf("Digite um número inteiro não negativo para calcular o fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Erro: Fatorial não é definido para números negativos.\n");
    } else {
        // Calcula o fatorial usando um loop for
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        // Imprime o resultado do fatorial
        printf("O fatorial de %d é: %llu\n", numero, fatorial);
    }

    return 0;
}