#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa em C que leia a nota final, o total de presen�as e o n�mero total de
aulas ministradas e imprima a nota final, o total de presen�as e uma mensagem dizendo se
este aluno foi aprovado ou reprovado. Sabe-se que a freq��ncia necess�ria � de no m�nimo
75% das aulas ministradas e que a nota m�nima deve ser maior ou igual a 6.0. */

int main() {
	int aulas, presenca;
	float notaFinal,  porcentagem;
	printf("Informe a nota final do aluno: ");
	scanf("%f", &notaFinal);
	
	printf("Informe o total de presencas do aluno: ");
	scanf("%d", &presenca);
	
	printf("Informe o total de aulas ministradas desta materia: ");
	scanf("%d", &aulas);
	
	
	porcentagem = (presenca*100)/aulas;
	
	printf("\nA frenquencia do aluno e igual a %.2f%%!",porcentagem);
	
		if(notaFinal>=6 && porcentagem>=75){
		printf("\nAPROVADO!\n");
	}else if(notaFinal<6 && porcentagem<75){
		printf("\nREPROVADO!\n");
	}else if(porcentagem>=75 && notaFinal<6){
		printf("\nREPROVADO!\n");
	}else if(porcentagem<75 && notaFinal>=6){
		printf("\nREPROVADO!\n");	
	}
	
	
	
	
	
}
