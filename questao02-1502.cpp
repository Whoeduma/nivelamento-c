#include <stdio.h>
#include <stdlib.h>

//Um programa que calcule a área do triângulo

int main (){
	int b, h, area;
	
	printf("Informe a base do triangulo: ");
	scanf("%d", &b);
	printf("\nInforme a altura do triangulo: ");
	scanf("%d", &h);
	
	area = (b*h)/2;
	
	printf("\nA area do triangulo e: %d", area);
}
