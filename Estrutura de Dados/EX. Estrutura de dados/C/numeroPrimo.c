#include <stdio.h>

// Função para verificar se um número é primo
int isPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    
    // Lê um número do usuário
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    // Verifica se o número é primo e imprime a resposta
    if (isPrimo(n)) {
        printf("eh primo.\n");
    } else {
        printf("Nao eh primo.\n");
    }
    
    return 0;
}