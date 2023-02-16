//Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2;
	float soma, subtracao,multiplicacao,divisao;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	printf("/n");
	
	soma = n1+n2;
	printf("A soma dos dois numeros e igual a: %.2f\n",soma);
	
	subtracao = n1-n2;
	printf("A subtracao dos dois numeros e igual a: %.2f\n",subtracao);
	
	multiplicacao = n1*n2;
	printf("A multiplicacao dos dois numeros e igual a: %.2f\n", multiplicacao);
	
	divisao = n1/n2;
	printf("A divisao dos dois numeros e igual a: %.2f\n", divisao);
	
	return 0;
}
