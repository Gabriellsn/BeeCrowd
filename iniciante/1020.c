#include<stdio.h>
int main(){
	int dias, anos, meses;
	scanf("%d", &dias);
	if(dias >= 365){
		anos = dias/365;
		dias = dias % 365;
		
	}
	if(dias >= 30 ){
	
	meses = dias/30;
	dias = dias % 30;
}
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	
		
		
		
		
		
	return 0;
}