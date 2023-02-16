#include<stdio.h>
#include<stdlib.h>


//Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O programa pergunta as medidas de largura e altura da parede em metros e escreve quantas latas de tinta serão necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2 litros.

main(){
	float pi=3.14,raio,area;
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	printf("/nO pi e igual a 3.14\n");
	area=pi*raio*raio;
	
	printf("/nA area do circulo e igual a %.2f",area);
	return 0;
}
