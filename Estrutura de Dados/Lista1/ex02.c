#include <stdio.h>

int potencia(int x, int n) {

    if (n == 0)
        return 1;
    else
        return x * potencia(x, n - 1);
}

int main() {
    int num1, num2;

    int resultado = potencia(num1, num2);

    printf("%d elevado a %d eh: %d\n", num1, num2, resultado);

    return 0;
}
