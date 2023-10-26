#include<stdio.h>

int main(){
	char nome[10];
	double vendas, salario;
	scanf("%s %lf %lf", nome, &salario, &vendas);
	printf("TOTAL = R$ %.2f\n", (((vendas * 15) / 100)+salario));
	return 0;
}