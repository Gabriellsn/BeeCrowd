#include <stdio.h>
int main() {
	int a, b , horas = 0, aux;
	scanf("%d %d", &a, &b);
	if(a > b){
		printf("O JOGO DUROU %d HORA(S)\n", 24 - (a - b));
	}else if( b > a){
		printf("O JOGO DUROU %d HORA(S)\n",(b - a));
	}else{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
		 return 0;
}