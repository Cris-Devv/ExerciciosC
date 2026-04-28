#include <stdio.h>

int main(){
    int a, b ,c;
    printf("digite 3 valores inteiros:\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b+c){
        printf("erro, o A nao pode ser um lado de um triangulo");
    return 0;
    } else if (b>a+c){
        printf("erro, o B nao pode ser um lado de um triangulo");
    return 0;
    } else if (c>b+a){
        printf("erro, o C nao pode ser um lado de um triangulo");
    return 0;
    }
    if(a==b && b==c){
    printf("seu triangulo eh equilatero!!");
    } else if (a==b && b!=c){
    printf("seu triangulo eh isoscele!!");
    } else if ( a!=b && b!=c){
    printf("seu triangulo eh escaleno!!");
    }
}