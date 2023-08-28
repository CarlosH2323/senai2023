#include <stdio.h>

int main() {
    int n;
    printf("Digite o número total de doadores: ");
    scanf("%d", &n);

    while (n--) {
        char nome[50], sexo;
        int idade, dias;
        
        printf("Nome: ");
        scanf("%s", nome);
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        
        printf("Dias desde última doação: ");
        scanf("%d", &dias);
        
        printf("Status: %s\n", (sexo == 'M' && dias >= 60) || (sexo == 'F' && dias >= 90) ? "apto" : "inapto");
    }

    return 0;
}
