#include <stdio.h>
#include <stdlib.h>


//Programa que calcule a média de 5 notas de um aluno

int main(){
	float n1, n2, n3, n4, n5 ,media;
	printf("Informe a nota 1 do aluno:");
	scanf("%f", &n1);
	printf("\nInforme a nota 2 do aluno:");
	scanf("%f", &n2);
	printf("\nInforme a nota 3 do aluno:");
	scanf("%f", &n3);
	printf("\nInforme a nota 4 do aluno:");
	scanf("%f", &n4);
	printf("\nInforme a nota 5 do aluno:");
	scanf("%f", &n5);
	
	media = (n1 + n2 + n3+ n4 + n5)/5;
	
	printf("\nA media do aluno e : %.2f", media);
	
	return 0;
	
	
}
