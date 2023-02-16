#include <stdio.h>
#include <stdlib.h>

 /*Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos,
aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21
anos, Jovem.*/

int main() {
	int idade;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if(idade>70){
		printf("\nVELHO!");
	} else if(idade>21){
		printf("\nADULTO!");
	} else if (idade<21){
		printf("\nJOVEM!");
	}
}
