#include <stdio.h>

// Algoritmo para dizer se um valor é impar ou par
int main (){

    int n;
    printf("Digita um número aí: ");
    scanf("%i", &n);

    if (n % 2 == 0){
        printf("Esse número aí é par.");
    } else {
        printf("Esse número aí é impar.");
    }

    return 0;
}