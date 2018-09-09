#include <stdio.h>

int main ()

{
    int a, b, c;

    printf("Digite tres valores inteiros e iremos somar para voce \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int soma = a + b + c;

    printf("A soma dos valores digitados e: " "%d", soma);

    return 0;

}
