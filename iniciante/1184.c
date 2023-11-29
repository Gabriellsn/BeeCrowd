#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, soma = 0, qtd = 0;
    char operacao;
    scanf("%c", &operacao);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &x);
            if(i > j){ 
                soma += x;
                qtd++;
            }
        }
    }
    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma / qtd);
    }





}