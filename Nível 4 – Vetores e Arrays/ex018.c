//Leia 10 números e imprima o maior e o menor deles.
#include <stdio.h>
int main() {
    int numeros[10];
    int maior, menor;

    // Leitura dos números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    maior = menor = numeros[0];

    // Encontrar o maior e o menor número
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Impressão do maior e do menor número
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}