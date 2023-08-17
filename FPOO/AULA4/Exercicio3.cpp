#include <stdio.h>

int main() {
    float salario;
    float desconto = 0.0; // Inicializando o desconto como 0
    float teto_inss = 7087.22; // Teto máximo de desconto

    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    if (salario <= 1212.00) {
        desconto = 0.075 * salario;
    } else if (salario <= 2427.35) {
        desconto = 0.09 * salario;
    } else if (salario <= 3641.03) {
        desconto = 0.12 * salario;
    } else if (salario <= 7087.22) {
        desconto = 0.14 * salario;
    } else {
        desconto = 0.14 * teto_inss;
    }

    float salario_final = salario - desconto;

    printf("Desconto de INSS: R$ %.2f\n", desconto);
    printf("Salário final após desconto de INSS: R$ %.2f\n", salario_final);

    return 0;
}

