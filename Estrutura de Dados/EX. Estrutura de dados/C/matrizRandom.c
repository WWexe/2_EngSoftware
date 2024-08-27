#include <stdio.h>
#include <stdlib.h>

void printPares(int matriz[2][5]){
    printf("Numeros pares:\n");
    for(int i = 0; i < 2; i++){
        for(int h = 0; h < 5; h++){
            if(matriz[i][h] % 2 == 0){
                printf("%d", matriz[i][h]);
            }
        }
    }
}

int main(){
    int matriz[2][5];

    for(int i = 0; i < 2; i++){
        for(int h = 0; h < 5; h++){
            printf("Digite o valor da matriz [%d] [%d]", i, h);
            scanf("%d", &matriz[i][h]);
        }
    }
        printf("\n");
    for(int i = 0; i < 2; i++){
        for(int h = 0; h < 5; h++){
            printf("%i ", matriz[i][h]);
        }
        printf("\n");

        }
}
    

