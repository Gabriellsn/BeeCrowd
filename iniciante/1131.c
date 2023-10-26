#include <stdio.h>

int main() {
	int golsGremio = 0, golsInter = 0, x = 1, quantidadeDeGrenais = 0, vitoriasGremio = 0, vitoriasInter = 0, empate = 0;
	while( x == 1){
		quantidadeDeGrenais++;
		scanf("%d %d", &golsInter, &golsGremio);
		if(golsGremio > golsInter){
			vitoriasGremio++;
		}
		if(golsInter > golsGremio){
			vitoriasInter++;
		}
		if(golsInter == golsGremio){
			empate++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);
		
	}
	printf("%d grenais\n", quantidadeDeGrenais);
	printf("Inter:%d\n", vitoriasInter);
	printf("Gremio:%d\n",vitoriasGremio);
	printf("Empates:%d\n", empate);
	if(vitoriasGremio > vitoriasInter){
			printf("Gremio venceu mais\n");
		}
		if(vitoriasGremio < vitoriasInter){
			printf("Inter venceu mais\n");
		}
		if(golsInter == golsGremio){
			printf("Nao houve vencedor\n");
		}
	
	
	
	
	
	
	