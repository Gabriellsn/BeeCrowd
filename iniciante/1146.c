#include <stdio.h>
 
int main() {
    int x = 1;
    
    while(x != 0){
        scanf("%d", &x);
        for(int i = 1; i <= x;i ++){
        	if(i == x){
        	printf("%d\n",i);
			}else{
				printf("%d ", i);
			}
            
        }
        
    }
    
    
 
    return 0;
}