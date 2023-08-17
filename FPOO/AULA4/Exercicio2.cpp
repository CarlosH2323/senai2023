#include <stdio.h>

int main() {
    float salario;
    int num_filhos;
    
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);
    
    printf("Digite o número de filhos: ");
    scanf("%d", &num_filhos);
    
    if (salario < 2000) {
        float salario_familia = 45.0 * num_filhos;
        float salario_final = salario + salario_familia;
        printf("Salário final com salário família: R$ %.2f\n", salario_final);
    } else {
        printf("Salário final sem salário família: R$ %.2f\n", salario);
    }
    
    return 0;
}
