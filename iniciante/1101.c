#include <stdio.h>
 
int main() {
    int x = 1, y = 1, soma = 0;
    while(x != 0 && y != 0){
    	scanf("%d %d", &x, &y);
    	soma = 0;
    	if(x <= 0 || y <= 0){
    		break;
		}
    	if(x > y){
    		for(int i = y; i <= x; i++){
    			soma += i;
    			printf("%d ", i);
			}
			printf("Sum=%d\n",soma);
		}else if(y > x){
			for(int i = x; i <= y; i++){
				soma += i;
				printf("%d ", i);
			}
			printf("Sum=%d\n",soma);
		}
		
	}
 
    return 0;
}