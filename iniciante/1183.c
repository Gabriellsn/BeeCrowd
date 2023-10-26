#include <stdio.h>
#include <stdlib.h>

int main(){
	char operacao;
	float x, soma = 0, aux = 0;
	scanf("%c", &operacao);
	for(int i = 0; i < 12; i ++){
		for(int j = 0 ; j < 12; j++){
			scanf("%f", &x);
			if(j > i){
		    	soma += x;
		    	aux += 1;
			}
		}
	}
	if(operacao == 'S'){
		printf("%.1f\n", soma);
	}else{
		printf("%.1f\n", soma / aux);
	}
	
	
	
	
	
}