#include <stdio.h>

int main() {

    printf("---------------------------------- \n");
    printf("CONVERSOR DE QUILOGRAMAS EM LIBRAS \n");
    printf("---------------------------------- \n");

    float q;
    scanf("%f", &q);
    float l = q/0.45;

    printf("%.2f quilograma(s) equivale(m) a %.2f libra(s).", q, l);

    return 0;
}
