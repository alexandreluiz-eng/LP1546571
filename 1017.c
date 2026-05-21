#include <stdio.h>

int main() {
    int tempo, velocidade;
    double distancia, litros;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("%.3lf\n", litros);

    return 0;
}
