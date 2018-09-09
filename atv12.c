#include <stdio.h>

int main() {

    printf("---------------------------------- \n");
    printf("CONVERSOR DE MILHAS EM QUILOMETROS \n");
    printf("---------------------------------- \n");

    float m;
    scanf("%f", &m);
    float k = m*1.61;

    printf("%.2f milhas correspondem a %.2f quilometros", m, k);

    return 0;
}
