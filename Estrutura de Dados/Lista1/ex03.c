#include <stdio.h>

int soma_vetor(int vetor[], int indice, int tamanho) {
    if (indice >= tamanho)
        return 0;
    else
        return vetor[indice] + soma_vetor(vetor, indice + 1, tamanho);
}

int main() {
    int num[3];
    int tamanho;

    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);
    for (int i = 0; i < tamanho; i++){
        printf("Digite um numero");
        scanf("%d", &num[i]);
    }


    int resultado = soma_vetor(num, 0, tamanho);

    printf("A soma do vetor eh %d\n", resultado);

    return 0;
}
