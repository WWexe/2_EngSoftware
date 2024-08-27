#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    char matricula[20];
    char nota[20];
}Aluno;

Aluno listaAluno[100];
int numDeAlunos = 0;

void cadastrarAluno(){
    Aluno *aluno = &listaAluno[numDeAlunos];
    printf("---Cadastrar Aluno:---\n\n");
    printf("Informe o nome do Aluno:\n");
    fgets(aluno->nome, 20, stdin);
    printf("Informe a Matricula do Aluno:\n");
    fgets(aluno->matricula, 20, stdin);
    printf("Informe a note do Aluno:\n");
    fgets(aluno->nota, 20, stdin);
    numDeAlunos++;
}

void exibirAlunos(){
    for(int i = 0; i < numDeAlunos; i++){
        Aluno *aluno = &listaAluno[i];
        printf("---Aluno %d---\n", i + 1);
        printf("Nome: %s\n", aluno->nome);
        printf("Matricula: %s\n", aluno->matricula);
        printf("Nota: %s\n", aluno->nota);
    }
}

void consultarAluno(char nome[]){
    int encontrado = 0;
    
}

void menu(){
    printf("---Castrar Alunos---\n\n");
    printf("1 - Cadastrar Aluno:\n");
    printf("2 - Exibir Alunos\n");
    printf("3 - Sair");
}

int main(){
    int opcao;
    
    while(1) {
        menu();
        scanf("%d", &opcao);
        getchar();
        
        switch(opcao){
            case 1: 
                cadastrarAluno();
                break;
            case 2: 
                exibirAlunos();
                break;
            case 3:
                printf("Saindo...");
                return 0;
        }
    }
    return 0;
}