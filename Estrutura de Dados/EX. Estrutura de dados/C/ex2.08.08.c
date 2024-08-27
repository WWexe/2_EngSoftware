#include <stdio.h>

int somatoria(int n, int x){
    if(x == 0) {
        return 1;
    }else {
        return (n * somatoria(n, x - 1));
    }
}

int main(){
    int n, x;
    printf("Informe um numero positivo: ");
    scanf("%d", &n);
    printf("Informe outro numero: ");
    scanf("%d", &x);
    printf("somatorio: %d", somatoria(n, x));
}