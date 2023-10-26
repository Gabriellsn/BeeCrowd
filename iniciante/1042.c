#include <stdio.h>
#include<string.h>
 
int main() {
 	int x[3], y[3];
 	int aux, contador = 1 ;
	  	for(int i = 0; i < 3; i++){
 		scanf("%d", &x[i]);
 		y[i] = x[i];
	 }
	
	
	
 	for(int i = 0; i < 3; i ++){
 		for(int j = 0; j < 2 ; j++ ){
 			if(x[j] > x[j+1]){
 				aux = x[j];
 				x[j] = x[j+1];
 				x[j+1] = aux;
			 }
		 }
}

 		for( int k = 0; k < 3; k++){
 			printf("%d\n", x[k]);
		 }
		 printf("\n");
		 for( int l = 0; l < 3; l++){
 			printf("%d\n", y[l]);
		 }
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		

   
    return 0;
}