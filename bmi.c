#include<stdio.h>

int main(void){
	
	float peso, altura;
	float IMC;
	
	printf("\n   Ingrese el peso en kg: ");
	scanf("%f", &peso);

	while(peso <= 0){
		printf("   Numero no valido: ");
		printf("\n   Ingrese el peso en kg: ");
		scanf("%f", &peso);
	}
	
	printf("   Ingrese la altura en metros: ");
	scanf("%f", &altura);

	while(altura <= 0){
		printf("   Numero no valido: ");
		printf("\n   Ingrese la altura en metros: ");
		scanf("%f", &altura);
	}
	
	IMC = peso / (altura * altura);
	
	printf("\n   Su indice de masa corporal es: %.2f", IMC);
	printf("\n   Su condicion es: ");
	
	if (IMC < 18.5){
		printf("Bajo peso");
	}
	else if (IMC >= 18.5 && IMC < 25){
		printf("Normal");
	}
	else if (IMC >= 25 && IMC < 30){
		printf("Sobrepeso");
	}
	else if (IMC >= 30){
		printf("Obesidad");
	}
	
	return 0;
}
	
