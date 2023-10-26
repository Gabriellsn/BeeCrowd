#include<stdio.h>
int main(){
	int horafinal, minutofinal, segundofinal, hora, minuto, segundo, diafinal, dia;
	scanf("Dia %d", &dia);
	scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
	scanf("Dia %d", &diafinal);
	scanf("%d : %d : %d", &horafinal, &minutofinal, &segundofinal);
	dia = diafinal - dia;
	hora = horafinal - hora;
	minuto = minutofinal - minuto;
	segundo = segundofinal - segundo;
	if(segundo < 0){
		segundo += 60;
		minuto--;
	}
	if(minuto < 0){
		minuto += 60;
		hora--;
	}
	if(hora < 0){
		hora += 24;
		dia--;
	}
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n",hora);
	printf("%d minuto(s)\n", minuto);
	printf("%d segundo(s)\n", segundo);
	
	
	
	
	
	return 0;
}