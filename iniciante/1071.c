#include<stdio.h>
int main(){
	int num1, num2, ans = 0, cont,lim;
	scanf("%d %d", &num1, &num2);
	if(num1 > num2){
		cont = num2 + 1;
		lim=num1;
	}else{
		cont = num1 +1;
		lim = num2;
	}
	for(int i = cont; i < lim; i++){
		if(i % 2 != 0){
			ans+= i;
		}
	}
	printf("%d\n",ans);
	return 0;
	
}