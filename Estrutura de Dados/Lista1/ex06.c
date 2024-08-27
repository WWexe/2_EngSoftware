#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = somaDigitos(numero);
    printf("A soma dos digitos é: %d\n", resultado);

    return 0;
}
