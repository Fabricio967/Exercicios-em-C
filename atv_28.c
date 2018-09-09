#include <stdio.h>

int main() {

    printf("------------------ \n");
    printf("SOMA DOS QUADRADOS \n");
    printf("------------------ \n");
    printf("\n1. Insira 3 valores e calcularemos a soma de seus quadrados: \n");

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    a *= a;
    b *= b;
    c *= c;

    float soma = a + b + c;

    printf("\nA soma dos elementos inseridos e: %.2f", soma);

    return 0;
}
