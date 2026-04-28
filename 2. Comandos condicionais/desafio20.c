#include <stdio.h>

// Algoritmo para ordenar números maiores
int main() {
    int a, b, c;
    printf("Digite tres valores DISTINTOS:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c) {
        printf("Maior: A, Meio: B, Menor: C");
    } else if (a > c && c > b) {
        printf("Maior: A, Meio: C, Menor: B");
    } else if (b > a && a > c) {
        printf("Maior: B, Meio: A, Menor: C");
    } else if (b > c && c > a) {
        printf("Maior: B, Meio: C, Menor: A");
    } else if (c > a && a > b) {
        printf("Maior: C, Meio: A, Menor: B");
    } else if (c > b && b > a) {
        printf("Maior: C, Meio: B, Menor: A");
    } else {
        printf("Existem numeros iguais ou a combinacao nao foi prevista.");
    }

    return 0;
}