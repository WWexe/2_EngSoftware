#include <stdio.h>

int Comb(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return Comb(n - 1, k - 1) + Comb(n - 1, k);
}

int main() {
    int n, k;
    printf("Digite o numero total de pessoas (n): ");
    scanf("%d", &n);
    printf("Digite o numero de pessoas no grupo (k): ");
    scanf("%d", &k);

    int resultado = Comb(n, k);
    printf("O numero de grupos distintos de %d pessoas que podem ser formados a partir de %d pessoas e: %d\n", k, n, resultado);

    return 0;
}
