#include <stdlib.h>
#include<stdio.h>
int main(){
	char operacao;
	double matriz[12][12];
	double total = 0;
	scanf("%c", &operacao);
	
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			scanf("%lf", &matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			if(i > 6 && (j >(11 - i ) && j < i )){
				total += matriz[i][j];
			} 
		}
	}
	
	if(operacao == 'S'){
		printf("%.1lf\n", total);
	}
	else {
		printf("%.1lf\n", total / 30);
	}
	
	
	return 0;
}
