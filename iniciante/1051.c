#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   float valor, x, y;
   scanf("%f",&valor);
   if(valor > 4500){
   		printf("R$ %.2f\n",(valor - 4500) * 0.28 + 80 +270); 
   } else if(valor > 3000 && valor <= 4500) {
    	printf("R$ %.2f\n",((valor - 3000) * 0.18) + 80);
	}else if( valor > 2000 && valor <= 3000){
		printf("R$ %.2f\n",((valor - 2000) *0.08));
	} else{
		printf("Isento\n");
	}
    return 0;
}