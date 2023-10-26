#include <stdio.h>
#include <math.h>
 
int main() {
	int valor1;
	double valor;
	int cem, cinquenta, vinte, dez, cinco, dois;
	int moedas1, moedas50, moedas25, moedas10, moedas5, moedas01;
	scanf("%lf", &valor);
	cem = valor / 100;
	valor = valor - cem * 100;
	cinquenta = valor / 50;
	valor = valor - cinquenta * 50;
	vinte = valor / 20;
	valor = valor - vinte * 20;
	dez = valor / 10;
	valor = valor - 10 * dez;
	cinco = valor /5;
	valor = valor - cinco * 5;
	dois = valor / 2;
	valor = valor - dois * 2;
	moedas1 = valor / 1;
	valor = valor - moedas1*1;
	moedas50 = valor / 0.50;
	valor = valor - moedas50 * 0.50;
	moedas25 = valor / 0.25;
	valor = valor - moedas25 * 0.25;
	moedas10 = valor/ 0.10;
	valor = valor - moedas10 * 0.10;
	moedas5 = valor / 0.05;
	valor = valor - moedas5 * 0.05;
	moedas01 = valor / 0.01;
	valor = valor - moedas01 * 0.1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinquenta);
	printf("%d nota(s) de R$ 20.00\n", vinte);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinco);
	printf("%d nota(s) de R$ 2.00\n", dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moedas1);
	printf("%d moeda(s) de R$ 0.50\n", moedas50);
	printf("%d moeda(s) de R$ 0.25\n", moedas25);
	printf("%d moeda(s) de R$ 0.10\n", moedas10);
	printf("%d moeda(s) de R$ 0.05\n", moedas5);
	printf("%d moeda(s) de R$ 0.01\n", moedas01);
	
    
 
    return 0;
}