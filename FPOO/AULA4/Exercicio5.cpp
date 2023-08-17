#include <stdio.h>

int main() {
    char nome[50];
    float preco, novo_preco;
    
    printf("Digite o nome da mercadoria: ");
    scanf("%s", nome);
    
    printf("Digite o preço da mercadoria: R$ ");
    scanf("%f", &preco);
    
    if (preco < 1000) {
        novo_preco = preco * 1.05; // Aumento de 5%
    } else {
        novo_preco = preco * 1.07; // Aumento de 7%
    }
    
    printf("Nome da mercadoria: %s\n", nome);
    printf("Novo preço da mercadoria: R$ %.2f\n", novo_preco);
    
    return 0;
}

