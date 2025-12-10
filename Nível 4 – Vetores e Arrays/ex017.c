//Leia 10 números e guarde em um vetor, depois imprima todos.
#include <stdio.h>
int main() {
    int numeros[10];

    // Leitura dos números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Impressão dos números
    printf("Números digitados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}