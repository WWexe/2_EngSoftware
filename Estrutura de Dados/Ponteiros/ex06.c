#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float num, parteFracionaria;
    int parteInteira;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}
