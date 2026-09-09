#include <stdio.h>
#define PI 3.141592653589793238462642

float calcularAreaRectangulo (float, float);
float calcularPerimetroRectangulo (float, float);
float calcularAreaCirculo (float);
float calcularPerimetroCirculo (float);
void imprimirResultados (float, float);

int main() {
	
	int opcion;
	float longitud;
	float altura;
	float radio;
	float area, perimetro;
	
	do{
		printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
		scanf("%d", &opcion);
	} while (opcion < 1 || opcion > 2 );
	
	switch(opcion){
		
		case 1:
			printf("\nOpción de rectángulo seleccionada");
			printf("\n\nIngrese la longitud del rectangulo: ");
			scanf("%f", &longitud);
			printf("\nIngrese la altura del rectangulo: ");
			scanf("%f", &altura);
			
			area = calcularAreaRectangulo (longitud, altura);
			perimetro = calcularPerimetroRectangulo (longitud, altura);
			
			break;
		case 2:
			printf("\nOpción de circulo seleccionada");
			printf("\n\nIngrese el radio del circulo: ");
			scanf("%f", &radio);
			
			area = calcularAreaCirculo (radio);
			perimetro = calcularPerimetroCirculo (radio);
			break;
		default:
			printf("Error???");
			break;
	}
	
	
	imprimirResultados(area, perimetro);
	
	return 0;
}

void imprimirResultados(float area, float per){
	printf("\nArea: %.2f\n\nPerimetro: %.2f", area, per);
}
	
float calcularPerimetroRectangulo (float l, float h){
	return l*2 + h*2;
}

float calcularAreaRectangulo (float l, float h){
	return l*h;
}

float calcularPerimetroCirculo (float r){
	return 2*r*PI;
}

float calcularAreaCirculo (float r){
	return r*r*PI;
}	
