#include <stdio.h>

int main() {

    float c;

    printf("------------------------------------ \n");
    printf("CONVERSOR DE CELSIUS PARA FAHRENHEIT \n");
    printf("------------------------------------ \n");

    scanf("%f", &c);

    float f = (c*9/5)+32;

    printf("%.3f", f);

    return 0;
}
