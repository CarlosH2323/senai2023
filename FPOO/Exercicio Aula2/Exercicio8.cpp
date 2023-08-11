#include <stdio.h>
#include <math.h>

int main() {
    float raio, altura;
    const float pi = 3.14159;

    // Solicitar o raio e a altura do cilindro
    printf("Digite o raio do cilindro (cm): ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro (cm): ");
    scanf("%f", &altura);

    // Calcular a área da superfície lateral do cilindro
    float areaLateral = 2 * pi * raio * altura;

    // Calcular a área total do cilindro (incluindo as bases)
    float areaTotal = 2 * pi * raio * (raio + altura);

    // Calcular o volume do cilindro
    float volume = pi * pow(raio, 2) * altura;

    // Exibir os resultados
    printf("Área da superfície lateral do cilindro: %.2f cm2\n", areaLateral);
    printf("Área total do cilindro: %.2f cm2\n", areaTotal);
    printf("Volume do cilindro: %.2f cm3\n", volume);

    return 0;
}




