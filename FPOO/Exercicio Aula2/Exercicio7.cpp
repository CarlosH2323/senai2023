#include <stdio.h>

int main() {
    float capacidadeCaminhao = 18.0; // Capacidade do caminhão em toneladas
    float producaoAlqueire = 250.0; // Produção média de laranjas por alqueire em toneladas
    float totalToneladas; // Total de toneladas de laranjas
    int numCaminhoes; // Número de caminhões necessários
    float numAlqueires; // Número de alqueires necessários

    // Solicitar o total de toneladas de laranjas
    printf("Digite o total de toneladas de laranjas: ");
    scanf("%f", &totalToneladas);

    // Calcular o número de caminhões necessários
    numCaminhoes = totalToneladas / capacidadeCaminhao;

    // Calcular o número de alqueires necessários
    numAlqueires = totalToneladas / producaoAlqueire;

    // Exibir os resultados
    printf("Número de caminhões necessários: %d\n", numCaminhoes);
    printf("Número de alqueires necessários: %.2f\n", numAlqueires);

    return 0;
}
