#include<stdio.h>
#include<string.h>
int main(){
	int y = 0;
	scanf("%d", &y);
	int x[y];
	for(int i = 0; i <  sizeof(x)/sizeof(x[0]); i++){
		scanf("%d", &x[i]);
	}
	for(int i = 0; i <  sizeof(x)/sizeof(x[0]); i++){
	if(x[i] > 8000){
			printf("Mais de 8000!\n");
		}else{
			printf("Inseto!\n");
		}
}
	return 0;

}