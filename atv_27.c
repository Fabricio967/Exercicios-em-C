#include <stdio.h>

int main() {

    printf("----------------------------------------- \n");
    printf("CONVERSOR DE HECTARES EM METROS QUADRADOS \n");
    printf("----------------------------------------- \n");

    float h;
    scanf("%f", &h);
    float m = h*10000;

    printf("%.2f hectare(s) equivale(m) a %.2f metro(s) quadrado(s).", h, m);

    return 0;
}
