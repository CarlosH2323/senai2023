#include <stdio.h>
int main (){
    int velocidade;
    int distancia;
    printf("Digite a velocidade em km/h:");
    scanf("%d", velocidade);
    printf("Digite a dist�ncia em km:");
    scanf("%d",&distancia);
	int temp = velocidade * distancia / 10000;
    printf("o Tempo em horas é %d", tempo);
	return 0; 
}

