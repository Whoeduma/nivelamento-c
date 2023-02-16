#include<stdio.h>
#include<stdlib.h>

//Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria

main(){
	float custo, frete,despesas,tCustos, venda,lucro,porcentagem;
	printf("INFORME O VALOR DO PRODUTO: ");
	scanf("%f", &custo);
	printf("\nINFORME O VALOR DO FRETE: ");
	scanf("%f", &frete);
	printf("\nINFORME O VALOR DE DESPESAS EVENTUAIS: ");
	scanf("%f", &despesas);
	
	tCustos=custo+frete+despesas;
	printf("\nO valor total de custos e %.2f\n", tCustos);
	
	printf("\n\nQUAL O VALOR DA VENDA?  ");
	scanf("%f", &venda);
	
	lucro=venda-tCustos;
	printf("O lucro e igual a %.2f\n", lucro);

	porcentagem=(lucro*100)/venda;
	printf("A porcentagem de lucro e %.2f",porcentagem);

	return 0;
}
