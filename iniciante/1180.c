#include <stdio.h>


int main ()  {
	int n, i, menor = 0, pos;
	scanf("%d", &n);
	int x[n];
	for(i = 0; i < n; i++) {
		
		scanf("%d", &x[i]);
		if(i == 0) {
			menor = x[i];
		}
		if(x[i] < menor) {
			menor = x[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	return 0;
}