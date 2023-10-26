#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    int y[x];
    for(int i = 0; i < x; i++){
    	scanf("%d", &y[i]);
	}
    for(int i = 0; i < x; i ++){
    	if( y[i] > 0){
    		if( y[i] % 2 == 0){
    			printf("EVEN POSITIVE\n");
			} else{
				printf("ODD POSITIVE\n");
			}
			
		}else if(y[i] < 0){
			if(y[i] % 2 == 0){
				printf("EVEN NEGATIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}else{
			printf("NULL\n");
		}
	}
    return 0;
}