#include <stdio.h>
 
int main() {
    int x[20], aux, cont;
    for(int i = 0; i < 20; i++){
        scanf("%d", &x[i]);
    }
    for(int j = 0; j < 10; j++){
        if(j == 0){
            aux = x[j];
            x[j] = x[19];
            x[19] = aux;
            
        }else{
            cont++;
            aux = x[j];
            x[j] = x[19 - cont];
            x[19 - cont] = aux;
            
        }
       
        
    }
    for(int k = 0; k < 20; k++){
        printf("N[%d] = %d\n", k, x[k]);
    }
    
 
    return 0;
}
