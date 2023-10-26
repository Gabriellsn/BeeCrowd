#include <stdio.h>


int main(){
	int quantidadeDeCobaias, x, quantidade, totalCoelhos = 0, totalRatos = 0 ,totalSapos = 0, total = 0;
	char animal;
	scanf("%d", &x);
	for(int i = 0 ; i < x; i ++){
		scanf("%d %c", &quantidade, &animal);
		if(animal == 'C'){
			totalCoelhos += quantidade;
			total += quantidade;
		}
		if(animal == 'R'){
			totalRatos += quantidade;
			total+= quantidade;
		}
		if(animal == 'S'){
			totalSapos += quantidade;
			total += quantidade;
			
		}
		
	}
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalCoelhos);
	printf("Total de ratos: %d\n", totalRatos);
	printf("Total de sapos: %d\n",totalSapos);
	printf("Percentual de coelhos: %.2f %%\n", (100.0 * totalCoelhos) / total);
	printf("Percentual de ratos: %.2f %%\n", (100.0 * totalRatos) / total );
	printf("Percentual de sapos: %.2f %%\n", (100.0 * totalSapos) / total);
	
	
	
	
	
	return 0;