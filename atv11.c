#include <stdio.h>

int main() {

    printf("------------------------ \n");
    printf("CONVERSOR DE M/S EM KM/H \n");
    printf("------------------------ \n");

    float m;
    scanf("%f", &m);
    float k = m*3.6;

    printf("%.2f m/s corresponde a %.2f Km/h", m, k);

    return 0;
}
