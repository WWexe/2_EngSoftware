#include <stdio.h>

int multp_rec(int n1, int n2) {
    if (n2 == 0) {
        return 0;
    }
    if (n2 < 0) {
        return -multp_rec(n1, -n2);
    }
    return n1 + multp_rec(n1, n2 - 1);
}

int main() {
    int n1, n2;
    printf("Informe 2 numeros inteiros separados por espaco: ");
    scanf("%d %d", &n1, &n2);
    
    int resultado = multp_rec(n1, n2);
    printf("Resultado de %d * %d = %d\n", n1, n2, resultado);
    
    return 0;
}
