
#include <stdio.h>

int main() {
    int n;

    // Solicitar o número inteiro positivo e diferente de zero
    do {
        printf("Digite um número inteiro positivo e diferente de zero: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Número inválido. O número deve ser positivo e diferente de zero.\n");
        }
    } while (n <= 0);

    // Exibir n - 1 e n + 1
    printf("n - 1: %d\n", n - 1);
    printf("n + 1: %d\n", n + 1);

    return 0;
}
