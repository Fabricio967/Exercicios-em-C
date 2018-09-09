#include <stdio.h>

int main() {

    printf("-------------------------------------- \n");
    printf("CONVERSOR DE ACRES EM METROS QUADRADOS \n");
    printf("-------------------------------------- \n");

    float ac;
    scanf("%f", &ac);
    float mq = ac*4048.58;

    printf("%.2f acre(s) equivale(m) a %.6f metro(s) quadrado(s).", ac, mq);

    return 0;
}
