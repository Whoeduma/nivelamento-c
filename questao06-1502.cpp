#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo recebe um valor inteiro e se o n�mero for maior que 10, ser� impressa a
frase: "O n�mero e maior que 10". Se o n�mero for menor que 10, ser� impressa a frase:
�O n�mero � menor que 10�. Se o n�mero for igual a 10 aparecer� a frase: �Voc� acertou�.*/

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
