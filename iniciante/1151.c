#include <stdio.h>
 
int main() {
    int quantidade, n1 = 1, n2 = 0, aux;
    scanf("%d", &quantidade);
    
    for(int i = 0; i < quantidade; i++){
       if(i == quantidade - 1){
       	printf("%d\n" ,n2);
	   }else{
	   
    	printf("%d ", n2);
        aux = n2;
        n2 = n1 + n2;
        n1 = aux;
   		}
    }
 
    return 0;
}