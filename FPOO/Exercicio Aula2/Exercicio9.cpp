#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float precoOriginal, novoPreco;

    // Solicitar o nome da mercadoria
    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);

    // Solicitar o preço original da mercadoria
    printf("Digite o preço da mercadoria: ");
    scanf("%f", &precoOriginal);

    // Calcular o novo preço com aumento de 5%
    novoPreco = precoOriginal * 1.05; // 5% de aumento

    // Exibir o nome da mercadoria e o novo preço
    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Novo preço: %.2f\n", novoPreco);

    return 0;
}
