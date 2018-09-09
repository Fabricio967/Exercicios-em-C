#include <stdio.h>

int main() {

    printf("---------------------------------- \n");
    printf("CONVERSOR DE LIBRAS EM QUILOGRAMAS \n");
    printf("---------------------------------- \n");

    float l;
    scanf("%f", &l);
    float q = l*0.45;

    printf("%.2f libra(s) equivale(m) a %.2f quilogramas(s).", l, q);

    return 0;
}
