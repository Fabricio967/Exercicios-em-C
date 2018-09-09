#include <stdio.h>

int main()

{
    double numero;

    printf("Escreva um numero real e lhe retonaremos a sua quinta parte: \n");

    scanf("%lf", &numero);

    double quinto = numero/5;

    printf("%.3lf", quinto);

    return 0;
}
