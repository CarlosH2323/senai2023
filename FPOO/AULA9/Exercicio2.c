#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATOS 10

typedef struct {
    char nome[50];
    int votos;
} Candidato;

int main() {
    char nome_cidade[100];
    int total_candidatos, votos_brancos, votos_nulos;
    Candidato candidatos[MAX_CANDIDATOS];

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite o número de candidatos a prefeito: ");
    scanf("%d", &total_candidatos);

    for (int i = 0; i < total_candidatos; i++) {
        printf("Digite o nome do candidato %d: ", i + 1);
        scanf("%s", candidatos[i].nome);
        candidatos[i].votos = 0;
    }

    printf("Digite o total de votos em branco: ");
    scanf("%d", &votos_brancos);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &votos_nulos);

    int total_votos_validos = 0;
    for (int i = 0; i < total_candidatos; i++) {
        printf("Digite o total de votos para %s: ", candidatos[i].nome);
        scanf("%d", &candidatos[i].votos);
        total_votos_validos += candidatos[i].votos;
    }

    printf("\nResultado das Eleições em %s:\n", nome_cidade);

    if (total_votos_validos + votos_brancos + votos_nulos == 0) {
        printf("Eleição inválida: nenhum voto válido foi registrado.\n");
    } else {
        float percentual;
        int maior_votos = -1, vencedor = -1;

        for (int i = 0; i < total_candidatos; i++) {
            percentual = (float)candidatos[i].votos * 100 / total_votos_validos;
            printf("%s: %.2f%% dos votos\n", candidatos[i].nome, percentual);

            if (candidatos[i].votos > maior_votos) {
                maior_votos = candidatos[i].votos;
                vencedor = i;
            }
        }

        if (vencedor != -1) {
            if (maior_votos * 2 > total_votos_validos) {
                printf("O candidato eleito é %s!\n", candidatos[vencedor].nome);
            } else {
                printf("Haverá segundo turno entre os seguintes candidatos:\n");

                for (int i = 0; i < total_candidatos; i++) {
                    if (candidatos[i].votos == maior_votos) {
                        printf("%s\n", candidatos[i].nome);
                    }
                }
            }
        }
    }

    return 0;
}
