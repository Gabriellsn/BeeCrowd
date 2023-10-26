#include<stdio.h>

int main(){
	float aumento;
	float valor;
	scanf("%f", &valor);
	if(valor > 0 && valor < 400.01){
		aumento = valor * 0.15;
		printf("Novo salario: %.2f\n", aumento + valor);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 15 \%%\n");
	}
	 else if(valor > 400 && valor < 800.01){
		aumento = valor * 0.12;
		printf("Novo salario: %.2f\n", aumento + valor);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 12 \%%\n");
	}
	 else if(valor > 800 && valor < 1200.01){
		aumento = valor * 0.1;
		printf("Novo salario: %.2f\n", aumento + valor);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 10 \%%\n");
	}
	 else if(valor > 1200 && valor < 2000.01){
		aumento = valor * 0.07;
		printf("Novo salario: %.2f\n", aumento + valor);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 7 \%%\n");
	}
	 else{
	
		aumento = valor *0.04;
		printf("Novo salario: %.2f\n", aumento + valor);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 4 \%%\n");
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}