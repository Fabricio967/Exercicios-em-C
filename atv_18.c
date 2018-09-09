#include <stdio.h>

int main() {

    printf("------------------------------------- \n");
    printf("CONVERSOR DE METROS CUBICOS EM LITROS \n");
    printf("------------------------------------- \n");

    float m;
    scanf("%f", &m);
    float l = m*1000;

    printf("%.2f metros cubicos equivale a %.2f litros.", m, l);

    return 0;
}
