#include <stdio.h>

int main() {

    printf("-------------------------------- \n");
    printf("CONVERSOR DE CELSIUS PARA KELVIN \n");
    printf("-------------------------------- \n");

    float c;
    scanf("%f", &c);
    float k = c + 273.15;

    printf("%.3f", k);

    return 0;
}
