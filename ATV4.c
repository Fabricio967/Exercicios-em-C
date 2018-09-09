#include <stdio.h>

int main()

{

    double real;

    printf("Digite um numero real qualquer  e iremos retornar o quadrado desse numero: \n");

    scanf("%lf", &real);

    double quadrado = real*real;

    printf("%.2lf", quadrado);

    return 0;
}
