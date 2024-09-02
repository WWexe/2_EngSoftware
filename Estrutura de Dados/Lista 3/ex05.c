#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL, numero, tamanho = 0;

    printf("Digite os numeros (insira um numero negativo para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        tamanho++;
        vetor = (int *)realloc(vetor, tamanho * sizeof(int));

        if (vetor == NULL) {
            printf("Erro na alocacao de memoria.\n");
            return 1;
        }

        vetor[tamanho - 1] = numero;
    }

    printf("Numeros lidos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
