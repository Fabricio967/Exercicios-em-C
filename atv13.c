#include <stdio.h>

int main() {

    printf("---------------------------------- \n");
    printf("CONVERSOR DE QUILOMETROS EM MILHAS \n");
    printf("---------------------------------- \n");

    float k;
    scanf("%f", &k);
    float m = k/1.61;

    printf("%.2f quilometros correspondem a %.2f milhas.", k, m);

    return 0;
}
