#include <stdio.h>
#include <stdlib.h>


int main(){
	float m[12][12], soma = 0, valor;
	int numero;
	char operacao;
	scanf("%d" , &numero);
	scanf(" %c", &operacao);
	
	for(int i = 0; i < 12; i ++){
		for(int j = 0; j < 12; j++){
			scanf("%f", &m[i][j]);
		}
	}
	
	if(operacao == 'S'){
		for(int i = 0; i < 12; i ++){
		    soma += m[i][numero];
		}
		printf("%.1f\n", soma);
	}
	if(operacao == 'M'){
		for(int i = 0; i < 12; i ++){
		    soma += m[i][numero];
		}
		printf("%.1f\n", soma / 12);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}