#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocarString(int tamanho) {
    return (char*)malloc(tamanho * sizeof(char));
}

void removerVogais(char *str) {
    int i, j = 0;
    int tamanho = strlen(str);
    char *resultado = (char*)malloc((tamanho + 1) * sizeof(char));

    for (i = 0; i < tamanho; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            resultado[j++] = str[i];
        }
    }
    resultado[j] = '\0';

    printf("String sem vogais: %s\n", resultado);
    free(resultado);
}

int main() {
    char *str;
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    str = alocarString(tamanho + 1); 

    if (str == NULL) {
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    printf("Digite a string: ");
    scanf(" %[^\n]", str);

    removerVogais(str);

    free(str);

    return 0;
}
