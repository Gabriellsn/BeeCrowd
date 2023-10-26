#include <stdio.h>
int main (){
	int x, comida = 0, linha, coluna, panca,aux = 0;
	scanf("%d", &x);
	char tabuleiro[x][x];
	for(int i = 0; i < x; i++){
		scanf("%s", tabuleiro[i]);
	}
	for(int l = 0; l < x; l++){
		if(l % 2 == 0){
			for(int c = 0; c < x; c++){
				if(tabuleiro[l][c] == 'o'){
					comida++;
					if(panca < comida){
						panca = comida;
					}
					
				} else if(tabuleiro[l][c] == 'A'){
					if(panca < comida){
						panca = comida;
					}
					comida = 0;
					
				}
			}
		} else {
			for(int c = x - 1; c >=0; c--){
				if(tabuleiro[l][c] == 'o'){
					comida++;
					if(panca < comida){
						panca = comida;
					}
					
				} else if(tabuleiro[l][c] == 'A'){
					if(panca < comida){
						panca = comida;
					}
					
					comida = 0;
				}
			}
		}
	}
	printf("%d\n", panca);
	return 0;
}
