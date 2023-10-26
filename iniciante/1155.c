#include <stdio.h>
 
int main() {
    float resposta = 0;
    
    for(float i = 1; i <= 100; i++){
    	resposta += (1 / i);
	}
	printf("%.2f\n", resposta);
	
    
 
    return 0;
}