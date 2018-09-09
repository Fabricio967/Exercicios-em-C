#include <stdio.h>

int main() {

    printf("----------------------------- \n");
    printf("CALCULANDO A MEDIA ARITMETICA \n");
    printf("----------------------------- \n");
    printf("\n2. Insira quatro notas e calcularemos a media \n");

    float x, i, soma, media;

    i = 0;

    while (i < 4){
        scanf("%f", &x);
        soma += x;
        i++;
    }

    media = soma/i;

    printf("A media dos valores digitados e: %.2f", media);

    return 0;

}
