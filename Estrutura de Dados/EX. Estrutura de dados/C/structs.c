#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade; 
    float peso; 
    char nome[40];
}tipo_pessoa;

int main(){

    tipo_pessoa pessoa1 = {20, 100, "matheus"};
    printf("Acessando pessoa1\n");
    printf("Idade: %i\n", pessoa1.idade);
    printf("Peso: %.2f\n", pessoa1.peso);
    printf("Nome: %s\n", pessoa1.nome);
    printf("Digite o novo peso:\n");
    scanf("%f", &pessoa1.peso);
    printf("Peso Atual: %.2f", pessoa1.peso);
    printf("");
}

