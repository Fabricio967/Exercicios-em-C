#include <stdio.h>

int main() {

    printf("------------------------------------- \n");
    printf("CONVERSOR DE POLEGADAS EM CENTIMETROS \n");
    printf("------------------------------------- \n");

    float pol;
    scanf("%f", &pol);
    float cent = pol*2.14;

    printf("%.2f polegadas sao %.2f centimetros.", pol, cent);

    return 0;

}
