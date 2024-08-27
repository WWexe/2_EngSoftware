#include <stdio.h>
#include <stdlib.h>

int m, p1, p2;

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void primo(int m, int *p1, int *p2) {
    *p1 = m - 1;
    while (*p1 > 1 && !isPrime(*p1)) {
        (*p1)--;
    }

    *p2 = m + 1;
    while (!isPrime(*p2)) {
        (*p2)++;
    }
}

void chama() {
    int *ptrP1, *ptrP2;
    printf("Informe um valor para m: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("Maior número primo menor que m: %d\n", p1);
    printf("Menor número primo maior que m: %d\n", p2);
}

int main() {
    chama();
    return 0;
}
