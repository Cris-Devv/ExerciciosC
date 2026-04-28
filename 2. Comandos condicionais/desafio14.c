#include <stdio.h>

// Algoritmo para dizer se um número é positivo, negativo ou zero
int main(){

    int n;
    printf("Digita um número aí: ");
    scanf("%i", &n);

    if (n > 0){
        printf("O número é positivo.");
    } else if (n < 0){
        printf("O número é negativo.");
    } else {
        printf("O número é zero.");
    }

    return 0;
}