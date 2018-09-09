#include <stdio.h>

int main() {

    printf("------------------------------------- \n");
    printf("CONVERSOR DE CENTIMETROS EM POLEGADAS \n");
    printf("------------------------------------- \n");

    float cent;
    scanf("%f", &cent);
    float pol = cent/2.14;

    printf("%.2f centimetros sao %.2f polegadas.", cent, pol);

    return 0;

}
