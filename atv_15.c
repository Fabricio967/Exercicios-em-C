#include <stdio.h>

int main() {

    printf("------------------------------- \n");
    printf("CONVERSOR DE RADIANO PARA GRAUS \n");
    printf("------------------------------- \n");

    float radiano;
    scanf("%f", &radiano);
    float angulo = radiano*180/3.14;

    printf("%.4f radianos equivale a %.2f graus", radiano, angulo);

    return 0;
}
