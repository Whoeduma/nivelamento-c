#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a 
mensagem Você é muito jovem. Caso idade maior que 30 anos, o programa não fará nada.*/ 

int main () {
	int idade;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if(idade<30){
		printf("\nVOCE E MUITO JOVEM");
	}
}
