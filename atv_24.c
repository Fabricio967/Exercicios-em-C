#include <stdio.h>

int main() {

    printf("-------------------------------------- \n");
    printf("CONVERSOR DE METROS QUADRADOS EM ACRES \n");
    printf("-------------------------------------- \n");

    float mq;
    scanf("%f", &mq);
    float ac = mq*0.000247;

    printf("%.2f metros(s) quadrado(s) equivale(m) a %.6f acre(s).", mq, ac);

    return 0;
}
