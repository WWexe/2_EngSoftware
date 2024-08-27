#include <stdio.h>
#include <stdlib.h>

int main(){
    int inteiro = 10;
    float real = 9.5;
    char string[] = "carlinhos";
    int *ptrInt;
    float *ptrReal;
    char *ptrChar;

    ptrInt = &inteiro;
    ptrReal = &real;
    ptrChar = string;

    printf("\nBEFORE: Int: %d Real: %.1f Char: %s \n", inteiro, real, string);

    *ptrInt = 11;
    *ptrReal = 9.6;
    ptrChar = "cavalos";

    printf("AFTER: Int: %d Real: %.1f Char: %s\n\n", *ptrInt, *ptrReal, ptrChar);

    return 0;
}