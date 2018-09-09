#include <stdio.h>

int main () {

    printf("Calcular a media de 4 notas: \n");

    float notas[3];
    int i = 4;
    float media, soma;

    for(i = 0; i < 4; i++){
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    for(i = 0; i < 4; i++){
        printf("%.f\t ", notas[i]);
    }

    media = soma/i;

    printf("\nA media das notas e: %.2f", media);

    return 0;
}
