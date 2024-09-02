#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, tamanho, i;
    int pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    free(vetor);

    return 0;
}
