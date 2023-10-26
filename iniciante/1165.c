#include <stdio.h>
#include <stdlib.h>


int main(){
	int operacoes, numero, primo = 1;
	scanf("%d", &operacoes);
	
	for(int i = 0; i < operacoes; i++){
		scanf("%d", &numero);
		if(numero > 3){
			for(int i = 2; i < numero; i++){
				if(numero % i == 0 && i != numero){
					 primo  = 0;
					 break;
				}
				primo = 1;
			}
			
		}
		
		if(primo){
			printf("%d eh primo\n", numero);
		}else{
			printf("%d nao eh primo\n", numero);
		}
		
		
		
		
		
		
		
	}
	
	
	
	return 0;
}