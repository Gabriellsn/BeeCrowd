#include <stdio.h>
 
int main(){
    int n = 1, a;
    scanf("%d", &a);
    n = a;
    for(int i = 1; i < a; i++){
    	n *= i;
    	
	}
    printf("%d\n", n);
    

    return 0;
}