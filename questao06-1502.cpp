#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
“O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”.*/

int main (){
	int valor;
	printf("Informe um valor inteiro: ");
	scanf("%d", &valor);
	
	if(valor>10){
		printf("O NUMERO E MAIOR QUE 10");
	} else if(valor<10) {
		printf("O NUMERO E MENOR QUE 10");
	}  else if (valor==10){
		printf("VOCE ACERTOU!!!");
	}
}
