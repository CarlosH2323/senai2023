#include <stdio.h>
int main(){
	float nota1, nota2, nota3, nota4, nota5, media;
	char nome [20];
	printf("Digite o Nome do Aluno:");
	scanf("%s", &nome);
	printf("Nota1 = ");
	    scanf("%f", &nota1);
	       printf("Nota2 = ");
	          scanf("%f", &nota2);
                 printf("Nota3 = ");
	                scanf("%f", &nota3);
	                   printf("Nota4 = ");
 	                      scanf("%f", &nota4);
	                         printf("Nota5 = ");
	                            scanf("%f", &nota5);
	media = (nota1 + nota2 + nota3 + nota4 + nota5) /5;
    if(media >= 5)
		printf("\nAPROVADO!\n");
	else
		printf("\nREPROVADO!\n");
		printf("\nMEDIA = %4.2f\n", media);
		
		return 0;
}


