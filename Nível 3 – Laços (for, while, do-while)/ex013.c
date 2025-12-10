//Faça a tabuada de um número que o usuário digitar (ex: tabuada do 7).
#include <stdio.h>
int main() {
    int numero, i, resultado;

    // Solicita ao usuário que insira um número para a tabuada
    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);

    // Loop para calcular e imprimir a tabuada do número fornecido
    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}