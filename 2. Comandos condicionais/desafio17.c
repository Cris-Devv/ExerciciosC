#include <stdio.h>

int main(){

    float a, b;
    printf("digite um numero, ele sera chamado de A: ");
    scanf("%f", &a);
    printf("\ndigite outro numero, ele sera chamado de b: ");
    scanf("%f", &b);
    if (a>b){
        printf("seus valores sao diferentes e A eh maior q B");
    } else if (a<b){
        printf("seus valores sao diferentes e B eh maior q A");
    } else {
        printf ("seus valores sao iguais!!");
    }

    return 0;
}