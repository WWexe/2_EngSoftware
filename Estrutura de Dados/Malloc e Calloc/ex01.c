#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, par = 0, impar = 0;
    int *vetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    printf("Informe os valores do vetor de tamanho %d: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("Numeros Pares: %d\n", par);
    printf("Numeros Impares: %d\n", impar);

    free(vetor);

    return 0;
}
