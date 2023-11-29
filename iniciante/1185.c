#include <stdio.h>
#include <stdlib.h>


int main(){
    float matriz[12][12];
    int qtd = 0;
    float soma = 0;
    char operacao;
    scanf("%c", &operacao);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if(j < 11 - i){
                soma += matriz[i][j];
                qtd++;
            }
        }
    }
        if(operacao == 'S') printf("%.1f\n", soma);
        if(operacao == 'M') printf("%.1f\n", soma / qtd);

    return 0;
}