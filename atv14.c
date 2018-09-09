#include <stdio.h>

int main() {

    printf("------------------------------ \n");
    printf("CONVERSOR DE ANGULO EM RADIANO \n");
    printf("------------------------------ \n");

    float angulo;
    scanf("%f", &angulo);
    float radiano = (angulo/180)*3.1415;

    printf("%.1f graus equivale a %.3f radianos", angulo, radiano);

    return 0;
}
