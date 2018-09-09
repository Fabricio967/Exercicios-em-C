#include <stdio.h>

int main() {

    printf("------------------------- \n");
    printf("CONVERSOSR DE KM/H EM M/S \n");
    printf("------------------------- \n");

    float km;
    scanf("%f", &km);
    float ms = km/3.6;

    printf("%.3f Km/h corresponde a %.3f m/s", km, ms);

    return 0;
}
