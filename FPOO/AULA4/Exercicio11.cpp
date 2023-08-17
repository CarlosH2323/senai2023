#include <stdio.h>
#include <string.h>

int main() {
    char peca[20];
    float preco, desconto, precoFinal;

    printf("Digite a peça (camisa, bermuda ou calça): ");
    scanf("%s", peca);

    printf("Digite o preço da peça: R$ ");
    scanf("%f", &preco);

    if (strcmp(peca, "camisa") == 0) {
        desconto = 0.20;
    } else if (strcmp(peca, "bermuda") == 0) {
        desconto = 0.10;
    } else if (strcmp(peca, "calça") == 0) {
        desconto = 0.15;
    } else {
        printf("Peça inválida.\n");
        return 0;
    }

    precoFinal = preco - (preco * desconto);

    printf("Peça: %s\n", peca);
    printf("Desconto: %.2f%%\n", desconto * 100);
    printf("Preço final: R$ %.2f\n", precoFinal);

    return 0;
}

