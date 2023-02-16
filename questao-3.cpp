#include <stdio.h>
#include <stdlib.h>



//Dadas as medidas de uma sala, informe sua área.
int main() {
	float base,altura,area;
	
	printf("Informe a base da sala: ");
	scanf("%f", &base);
	
	printf("Informe a altura da sala: ");
	fflush(stdin);
	scanf("%f", &altura);
	
	area=base*altura;
	printf("A area da sala e igual a: %f",area);
	return 0;
}
