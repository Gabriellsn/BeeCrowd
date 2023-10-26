#include <stdio.h>

int main(){
	for(float i = 0; i < 2; i+=0.2){
		for(int j = 1; j <= 3; j++){
			if(i == 1|| i == 0 ){
				printf("I=%.0f J=%.0f\n", i, j + i);
			}else{
			printf("I=%.1f J=%.1f\n", i, j + i);
			}
			
			
			
			
			
		}
	}
	printf("I=2 J=3\n");
	printf("I=2 J=4\n");
	printf("I=2 J=5\n");
	
	
	
	
	
	
	return 0;
}