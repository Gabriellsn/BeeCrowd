#include <stdio.h>
#include<math.h>
 
int main() {
	double a,b,c, aux;
	double x[3];
	for(int i = 0; i < 3; i++){
		scanf("%lf", &x[i]);
	}
 		
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			if(x[j] < x[j + 1]){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}
	}
	a = x[0];
	b = x[1];
	c = x[2];
	 if(a >= b+c){
	 	printf("NAO FORMA TRIANGULO\n");
	 }else if((a*a)== (b*b) + (c*c)){
	 	printf("TRIANGULO RETANGULO\n");
	 }else if( (a*a) > (b*b) + (c*c)){
	 	printf("TRIANGULO OBTUSANGULO\n");
	 }else if((a*a )< (b*b )+ (c*c)){
	 	printf("TRIANGULO ACUTANGULO\n");
	 } 
	 if(a == b && b == c){
	 	printf("TRIANGULO EQUILATERO\n"); 	
	 }else if(a == b || b == c || a == c){
		printf("TRIANGULO ISOSCELES\n");
	 }
	
	
	 
 		
    return 0;
}