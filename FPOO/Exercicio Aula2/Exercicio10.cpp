#include <stdio.h>

int main() {
    char nomeCidade[100];
    int totalEleitores, totalVotosApurados;
    float participacao;

    // Solicitar o nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    // Solicitar o número total de eleitores
    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);

    // Solicitar o número total de votos apurados
    printf("Digite o número total de votos apurados: ");
    scanf("%d", &totalVotosApurados);

    // Calcular a porcentagem de participação
    participacao = (float)totalVotosApurados / totalEleitores * 100;

    // Exibir a porcentagem de participação
    printf("Porcentagem de participação dos eleitores em %s: %.2f%%\n", nomeCidade, participacao);

    return 0;
}
