#include <stdio.h>

int main() {

    printf("------------------------------ \n");
    printf("CONVERSOR DE KELVIN EM CELSIUS \n");
    printf("------------------------------ \n");

    float k;
    scanf("%f", &k);
    float c = k-273.15;
    printf("%.3f", c);

    return 0;
}
