#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a 
mensagem Voc� � muito jovem. Caso idade maior que 30 anos, o programa n�o far� nada.*/ 

int main () {
	int idade;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if(idade<30){
		printf("\nVOCE E MUITO JOVEM");
	}
}
