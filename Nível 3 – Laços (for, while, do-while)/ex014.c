//Some todos os números de 1 até 100 (resultado deve ser 5050).
#include <stdio.h>
int main() {
    int i, soma = 0;
    // Loop para somar os números de 1 a 100
    for (i = 1; i <= 100; i++) {
        soma += i;
    }
    // Imprime o resultado da soma
    printf("A soma dos números de 1 a 100 é: %d\n", soma);
    return 0;
}