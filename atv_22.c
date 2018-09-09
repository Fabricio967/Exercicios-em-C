#include <stdio.h>

int main() {

    printf("----------------------------- \n");
    printf("CONVERSOR DE JARDAS EM METROS \n");
    printf("----------------------------- \n");

    float j;
    scanf("%f", &j);
    float m = j*0.91;

    printf("%.2f jarda(s) equivale(m) a %.2f metro(s).", j, m);

    return 0;
}
