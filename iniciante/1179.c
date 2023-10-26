#include <stdio.h>
 
int main() {
    int contadorVetorPar = 0, contadorVetorImpar = 0, numero;
    int pares[5], impares[5];
    for(int i = 0; i < 15; i++){
    	scanf("%d", &numero);
    	if(numero % 2 == 0){
    		pares[contadorVetorPar] = numero;
    		contadorVetorPar++;
    		if(contadorVetorPar > 4){
    			contadorVetorPar = 0;
    			
    			for(int j = 0; j < 5; j++){
    				if(pares[j] != 0){
    					printf("par[%d] = %d\n", j, pares[j]);
    					pares[j] = 0;
					}
    				
				}
			}
		}
		if(numero % 2 != 0){
			impares[contadorVetorImpar] = numero;
			contadorVetorImpar++;
			if(contadorVetorImpar > 4){
				contadorVetorImpar = 0;
				for(int j = 0; j < 5; j++){
					if(impares[j] != 0){
						printf("impar[%d] = %d\n", j, impares[j]);
    					impares[j] = 0;
					}
    				
				}
				
			}			
		}

}
for(int j = 0; j < 5; j++){
					if(impares[j] != 0){
						printf("impar[%d] = %d\n", j, impares[j]);
    					
					}
    				
				}
				
				
for(int j = 0; j < 5; j++){
    				if(pares[j] != 0){
    					printf("par[%d] = %d\n", j, pares[j]);
    					
					}
    				
				}
				
				
				
	return 0;
}