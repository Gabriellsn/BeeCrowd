#include <stdio.h>

int main(){
	int i = 1, contador = 1;
	float numero, nota1, nota2;
	while(i == 1){
		scanf("%f", &numero);
		if(numero <= 10 && numero >= 0){
			if(contador == 1){
				nota1 = numero;
				contador++;
			}else{
				nota2 = numero;
				printf("media = %.2f\n", (nota1 + nota2) / 2);
				contador = 1;
				
					do{
						printf("novo calculo (1-sim 2-nao)\n");
						scanf("%d", &i);
					}while( i != 1 && i != 2);			
					
					
				
				
			}
			
			
			
		}else{
			printf("nota invalida\n");
		}
		
	}
	
	
	
	
}