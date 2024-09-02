#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, N, X, i, contagem = 0;

    printf("Digite o tamanho do vetor N: ");
    scanf("%d", &N);

    vetor = (int *)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Multiplos de %d no vetor:\n", X);
    for (i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            contagem++;
        }
    }

    if (contagem == 0) {
        printf("Nenhum multiplo de %d encontrado no vetor.", X);
    } else {
        printf("\nTotal de multiplos de %d: %d", X, contagem);
    }

    free(vetor);

    return 0;
}
