#include <stdio.h>

int main() {

    printf("----------------------------- \n");
    printf("CONVERSOR DE REAIS EM DOLARES \n");
    printf("----------------------------- \n");

    float real, dolar;

    printf("\n1. Qual e a cotacao do dolar? \t");
    scanf("%f", &dolar);

    printf("\n2. Quantos reais voce quer converter? \t");
    scanf("%f", &real);
    dolar = real/dolar;

    printf("\n%.2f real(is) equivale(m) a %.4f dolar(es). ", real, dolar);

    return 0;

}
