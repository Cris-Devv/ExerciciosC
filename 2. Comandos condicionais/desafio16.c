#include <stdio.h>

// Algoritmo para mostrar o símbolo invertido de um número positivo
int main(){
    
    int a;
    printf("digite um valor inteiro: ");
    scanf("%d", &a);
    if(a>=0){
        printf(" opa seu valor %d e positivo", a);
    } else {
        printf("opa seu valor era negativo, foi invertido e agora eh:%d", a*-1);
    }

    return 0;
}