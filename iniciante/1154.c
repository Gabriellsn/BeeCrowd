#include <stdio.h>
 
int main() {
    int idades = 0, total = 0,  i = 0;
    float media;
    while(i == 0){
        scanf("%d", &idades);
        
        if(idades > 0){
            total += 1;
            media += idades;
        }else{
            i += 1;
        }
        
        
    }
    printf("%.2f\n", media / total);
    
    
 
    return 0;
}