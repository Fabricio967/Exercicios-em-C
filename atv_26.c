#include <stdio.h>

int main() {

    printf("----------------------------------------- \n");
    printf("CONVERSOR DE METROS QUADRADOS EM HECTARES \n");
    printf("----------------------------------------- \n");

    float m;
    scanf("%f", &m);
    float h = m*0.0001;

    printf("%.2f metros(s) quadrado(s) equivale(m) a %.6f hectare(s).", m, h);

    return 0;
}
