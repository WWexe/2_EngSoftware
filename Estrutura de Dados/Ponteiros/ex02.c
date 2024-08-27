#include <stdio.h>
#include <stdlib.h>

int main(){
    int var1 = 3;
    int var2 = 9;

    printf("var1: %x\n", &var1);
    printf("var2: %x\n", &var2);

    if(&var1 > &var2){
        printf("End. Maior: %x", &var1);
    }else {
        printf("End. MAior: %x", &var2);
    }

    return 0;
}