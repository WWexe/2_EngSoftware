#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
    int linha;
    int coluna;
} NumeroPosicao;

int main() {
    int N, M;

    printf("Digite o numero de linhas (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Entrada invalida para N.\n");
        return 1;
    }

    printf("Digite o numero de colunas (M): ");
    if (scanf("%d", &M) != 1 || M <= 0) {
        printf("Entrada invalida para M.\n");
        return 1;
    }

    int **matriz = (int **)malloc(N * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro na alocacao de memoria para as linhas da matriz.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(M * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro na alocacao de memoria para a linha %d.\n", i);
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            return 1;
        }
    }

    printf("Digite os elementos da matriz (%d elementos):\n", N * M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida para o elemento [%d][%d].\n", i + 1, j + 1);
                for (int k = 0; k < N; k++) {
                    free(matriz[k]);
                }
                free(matriz);
                return 1;
            }
        }
    }

    NumeroPosicao maior1, maior2;
    maior1.valor = matriz[0][0];
    maior1.linha = 0;
    maior1.coluna = 0;
    maior2.valor = -2147483648;
    maior2.linha = -1;
    maior2.coluna = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int atual = matriz[i][j];
            if (atual > maior1.valor) {
                maior2.valor = maior1.valor;
                maior2.linha = maior1.linha;
                maior2.coluna = maior1.coluna;

                maior1.valor = atual;
                maior1.linha = i;
                maior1.coluna = j;
            } else if (atual > maior2.valor && atual != maior1.valor) {
                maior2.valor = atual;
                maior2.linha = i;
                maior2.coluna = j;
            }
        }
    }

    if (maior2.linha == -1 && maior2.coluna == -1) {
        printf("\nA matriz possui apenas um valor único: %d na posição [%d][%d].\n",
               maior1.valor, maior1.linha + 1, maior1.coluna + 1);
    } else {
        printf("\nOs dois maiores numeros na matriz sao:\n");
        printf("1º Maior: %d na posicao [%d][%d]\n", maior1.valor, maior1.linha + 1, maior1.coluna + 1);
        printf("2º Maior: %d na posicao [%d][%d]\n", maior2.valor, maior2.linha + 1, maior2.coluna + 1);
    }

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
