#include <stdio.h>

// Algortimo que mostra valor da maçã
int main(){

    float maca;
    printf("Quantas macas inteiras tu quer? \n");
    scanf("%f", &maca);

    if (maca < 12){
        printf("O total da sua compra foi: %.2f", maca*0.30);
    } else {
        printf("O total da sua compra foi: %.2f", maca*0.25);
    }

    return 0;
}