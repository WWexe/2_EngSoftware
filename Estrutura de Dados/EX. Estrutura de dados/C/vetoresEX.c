#include <stdio.h>

int main(){

    int vetor[3];
    printf("Digite 3 numeros separados por espaco:\n");
    for(int i = 0; i < 3; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Ordem inversa:\n");
    printf("%d %d %d", vetor[2], vetor[1], vetor[0]);

}