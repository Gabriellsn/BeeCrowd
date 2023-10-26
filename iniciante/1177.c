#include <stdio.h>
 
int main() {
    int y, x[1000], cont = 0;
    scanf("%d", &y);
    for( int i = 0; i < 1000; i++){
            if(cont == y){
                cont = 0;
            }
            printf("N[%d] = %d\n",i, cont);
            cont++;
            }
          
        
    
 
    return 0;
}