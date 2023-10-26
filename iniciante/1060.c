#include <stdio.h>
 
int main() {
	int y;
 	double x[6];
 	for(int i = 0; i < 6; i++){
 		scanf("%lf", &x[i]);
 		if(x[i] > 0){
 			y++;
		 }
	 }
	 printf("%d valores positivos\n", y);
    return 0;
}