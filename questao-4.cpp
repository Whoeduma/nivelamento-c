


#include <stdio.h>
#include <stdlib.h>
//Dado um valor em reais e a cota��o do d�lar, converta esse valor para d�lares.

int main() {
	float valordolar,total;
	
	printf("---- A COTACAO DO DOLAR HOJE ESTA 5.17 REAIS ----\n");
	printf("\nDigite o valor em reais que deseja converter: ");
	scanf("%f",&valordolar);
	
	total=valordolar*5.17;
	printf("O valor covertido fica em %.2f dolares", total);
	return 0;
}
