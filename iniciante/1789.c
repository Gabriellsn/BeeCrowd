#include<stdio.h>

int main(){
	int quantidadeDeLesmas, velocidadeDaLesma,maiorVelocidade = 0;
	while(scanf("%d", &quantidadeDeLesmas) != EOF){
			maiorVelocidade = 0;
			for(int i = 0; i < quantidadeDeLesmas; i++){
				scanf("%d", &velocidadeDaLesma);
				if(velocidadeDaLesma > maiorVelocidade) maiorVelocidade = velocidadeDaLesma;
			}		
			if(maiorVelocidade >= 20){
				printf("3\n");
			}else if(maiorVelocidade >= 10){
				printf("2\n");
			} else {
				printf("1\n");
			}
	
	
		
	}
	
	

	
	return 0;
}
