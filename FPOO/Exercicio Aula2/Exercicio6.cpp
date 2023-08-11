#include <stdio.h>

int main() {
    float velocidadeCruzeiro = 900.0; // Velocidade de cruzeiro em km/h
    float distancia; // Distância em quilômetros
    float tempo; // Tempo em horas

    // Solicitar a distância em quilômetros
    printf("Digite a distância em quilômetros: ");
    scanf("%f", &distancia);

    // Calcular o tempo necessário (tempo = distância / velocidade)
    tempo = distancia / velocidadeCruzeiro;

    // Exibir o tempo necessário
    printf("Tempo necessário para sobrevoar %.2f km: %.2f horas\n", distancia, tempo);

    return 0;
}
