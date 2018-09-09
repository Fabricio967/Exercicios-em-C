#include <stdio.h>

int main() {

    printf("------------------------------------ \n");
    printf("CONVERSOR DE FAHRENHEIT PARA CELSIUS \n");
    printf("------------------------------------ \n");

    float f;
    scanf("%f", &f);
    float c = 5*(f-32)/9;

    printf("%.3f", c);

    return 0;
}
