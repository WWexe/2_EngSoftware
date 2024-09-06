#include <stdio.h>
#include <stdlib.h>

int main() {
    int loteria[6], bilhete[6], *numeros_acertados, quantidade_acertos = 0;

    printf("Digite os 6 numeros sorteados pela loteria:\n");
    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        if (scanf("%d", &loteria[i]) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
    }

    printf("Digite os 6 numeros do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        if (scanf("%d", &bilhete[i]) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (loteria[i] == bilhete[j]) {
                quantidade_acertos++;
                break;
            }
        }
    }

    numeros_acertados = (int *)malloc(quantidade_acertos * sizeof(int));

    if (numeros_acertados == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    int indice = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (loteria[i] == bilhete[j]) {
                numeros_acertados[indice++] = loteria[i];
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
            printf("%d ", numeros_acertados[i]);
        }
    } else {
        printf("Nenhum acerto.");
    }

    printf("\n");

    free(numeros_acertados);

    return 0;
}
