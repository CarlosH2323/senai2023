#include <stdio.h> //Entrada e Sa�da padr�o
#include <locale.h> //Configura��es de Localiza��o
#include <string.h> //Strings s�o vetores de caracteres

int main(){
	setlocale(LC_ALL,"");//Configura��es
	char times[5][20];
	int pontos[5];
	int i;
	
    //Pontua��o
    int indiceGanhador = 90;
    int indiceRebaixado = 30;
    
    for(i = 0; i <5;) i++);
	{
	printf("Digite o %d Time:", i + i);
	gets(times[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digite a Pontua��o %s:",times[i]);
		scanf("%f", &pontos[i]);
	}
	printf("%s Ponto: %d\n", times[0], pontos[0]);
    printf("%s Ponto: %d\n", times[1], pontos[1]);
    printf("%s Ponto: %d\n", times[2], pontos[2]);
    printf("%s Ponto: %d\n", times[3], pontos[3]);
    printf("%s Ponto: %d\n", times[4], pontos[4]);
	
	return 0;
}
