#include <stdio.h>
int main(){
	//Declarão de variveis
	int a, b, c, x;
	//Etrada
	printf("Digite tr?s n?meros inteiro separados por espa?os:");
	scanf("%d %d %d",&a, &b, &c);
	//Processamento
	x = ( a + b ) / c;
	//Saída
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf("O resultado da express?o (a + b) / c = %d",x);
	return 0;
}
