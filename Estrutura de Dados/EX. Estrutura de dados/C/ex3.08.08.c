#include <stdio.h>
int somaVetor(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0;  
    } else {
        return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);  
    }
}
int main() {
    int n;
    printf("Informe o numero de elementos no vetor: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Informe os valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    int soma = somaVetor(vetor, n);
    printf("A soma dos elementos do vetor eh: %d\n", soma);
    return 0;
}

