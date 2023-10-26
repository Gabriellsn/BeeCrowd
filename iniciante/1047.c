#include <stdio.h>
 
int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal, horas, minutos, tempoInicial, delta, tempoFinal;
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    tempoInicial = (horaInicial * 3600) + (minutoInicial * 60);
    tempoFinal = (horaFinal * 3600) + (minutoFinal * 60);
    
    delta = tempoFinal - tempoInicial;
    if(delta < 0){
        delta *= -1;
        delta = (24*3600) - delta;
    }
    if(delta == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
    horas = delta / 3600;
    delta = delta % 3600;
    minutos = delta  / 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    }
 
    return 0;
}