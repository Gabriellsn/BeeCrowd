#include <stdio.h>
 
int main() {
   int x = 0, y = 0, z = 1;
   scanf("%d%d", &x, &y);
   for(int i = 1; i <= y; i++){
   		if(z == x){
   			printf("%d\n", i);
   			z = 1;
		   }
		else{
			printf("%d ", i);
			z++;
		}
   }
   
   
   
    return 0;
}