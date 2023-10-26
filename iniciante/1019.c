#include<stdio.h>
int main(){
	int segundos=0, minutos=0, horas=0;
	scanf("%d", &segundos);
	if(segundos >= 3600){
		horas = segundos/3600;
		segundos =  segundos % 3600;
	}
	if(segundos > 60){
		minutos = segundos/60;
		segundos = segundos % 60;
	}
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	
	
	
	
	
	return 0;
}