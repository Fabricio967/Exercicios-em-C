#include <stdio.h>

int main() {

    printf("------------------------------------- \n");
    printf("CONVERSOR DE LITROS EM METROS CUBICOS \n");
    printf("------------------------------------- \n");

    float l;
    scanf("%f", &l);
    float m = l/1000;

    printf("%.f litros equivale a %.4f metros cubicos.", l, m);

    return 0;
}
