#include <stdio.h>

int multi(int a, int b) {

    if (b == 0)
        return 0;
    else
        return a + multi(a, b-1);
}
int main() {
    int num1, num2;

    printf("insira um numero ");
    scanf("%d", &num1);

    printf("insira outro numero ");
    scanf("%d", &num2);

    int resultado = multi(num1, num2);

    printf("%d multiplicado %d eh: %d\n", num1, num2, resultado);

    return 0;
}
