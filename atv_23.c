#include <stdio.h>

int main() {

    printf("----------------------------- \n");
    printf("CONVERSOR DE METROS EM JARDAS \n");
    printf("----------------------------- \n");

    float m;
    scanf("%f", &m);
    float j = m/0.91;

    printf("%.2f metros(s) equivale(m) a %.2f jardas(s).", m, j);

    return 0;
}
