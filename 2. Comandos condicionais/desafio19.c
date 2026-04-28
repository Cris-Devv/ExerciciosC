#include <stdio.h>

// Algoritmo que mostra o maior número digitado pelo cabra
int main(){

    int n1, n2, n3;
    printf("Digite três números inteiros: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3){
        printf("O maior numero digitado foi: %i", n1);
    } else if (n2 > n3){
        printf("O maior numero digitado foi: %i", n2);
    } else {
        printf("O maior numero digitado foi: %i", n3);
    }

    return 0;
}