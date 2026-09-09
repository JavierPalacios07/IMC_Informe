#include <stdio.h>
#define TAM 5

// Repositorio de GitHub: 

int main(){
	
	int codigos[TAM];
	float precios[TAM];
	float mas_Caro;
	float mas_Barato;
	int n_Caro = 0;
	int n_Barato = 0;
	
	printf("Ingrese %d productos, se solicitará el código y precio: \n", TAM);
	
	for (int i = 0; i < TAM; i++){
		
		do{
			printf("\nIngrese el código de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			
			if (codigos[i] <= 0 || codigos[i] > 999999999)
				printf("\nError. El código de barras debe estar entre 1 y 999999999\n");
			
		} while(codigos[i] <= 0 || codigos[i] > 999999999);
		
		do{
			printf("\nIngrese el precio: ");
			scanf("%f", &precios[i]);
			
			if (precios[i] < 0)
				printf("\nError. El precio debe ser un valor positivo\n");
			
		} while(precios[i] < 0);
		
	}
	
	printf("\n\n\n\nCodigo Precio");
	
	for (int i = 0; i < TAM; i++){
		printf("\n\n	%d		%.2f", codigos[i], precios[i]);
	}	
	
	mas_Caro = precios[0];
	mas_Barato = precios[0];
	
	for (int i = 1; i < TAM; i++){
		
		if(precios[i] > mas_Caro){
			n_Caro = i;
			mas_Caro = precios[i];
		}	
		
		if(precios[i] < mas_Barato){
			n_Barato = i;
			mas_Barato = precios[i];
		}
	}
	
	printf("\n\n\n\nMas caro: [%d] %.2f", codigos[n_Caro], precios[n_Caro]);
	printf("\n\nMas barato: [%d] %.2f", codigos[n_Barato], precios[n_Barato]);
	
	return 0;
}

