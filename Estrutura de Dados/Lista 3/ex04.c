#include <stdio.h>
#include <stdlib.h>

int main() {
    int loteria[6], bilhete[6], *acertos, quantidade_acertos = 0;

    printf("Digite os 6 números sorteados pela loteria:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &loteria[i]);
    }

    printf("Digite os 6 numeros do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &bilhete[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (loteria[i] == bilhete[j]) {
                quantidade_acertos++;
                break;
            }
        }
    }

    acertos = (int *)malloc(quantidade_acertos * sizeof(int));

    if (acertos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    int indice = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (loteria[i] == bilhete[j]) {
                acertos[indice++] = loteria[i];
                break;
            }
        }
    }

    printf("Numeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", loteria[i]);
    }

    printf("\nNumeros acertados: ");
    if (quantidade_acertos > 0) {
        for (int i = 0; i < quantidade_acertos; i++) {
            printf("%d ", acertos[i]);
        }
    } else {
        printf("Nenhum acerto.");
    }

    printf("\n");

    free(acertos);

    return 0;
