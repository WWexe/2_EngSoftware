#include <stdio.h>

int somatoria(int n){
    if(n == 1) {
        return 1;
    }else {
        return n + somatoria(n - 1);
    }
}

int main(){
    int n;
    printf("Informe um numero positivo: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Informe um numero valido!");
    }else{
        printf("somatorio: %d", somatoria(n));
    }
}
