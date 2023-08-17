#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os valores dos lados do triângulo:\n");
    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Lado c: ");
    scanf("%f", &c);

    if (a != b && b != c && a != c) {
        printf("Triângulo Escaleno\n");
    } else if (a == b && b == c) {
        printf("Triângulo Equilátero\n");
    } else {
        printf("Triângulo Isósceles\n");
    }

    return 0;
}

