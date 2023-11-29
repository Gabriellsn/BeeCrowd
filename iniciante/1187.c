#include <stdio.h>
#include <stdlib.h>


int main(){
    double matriz[12][12];
    int qtd = 30;
     double soma = 0;
    char operacao;
    scanf("%c", &operacao);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
            if(j < 11 - i  && j > i){
                soma += matriz[i][j];
                
            }
        }
    }
        if(operacao == 'S') printf("%.1lf\n", soma);
        if(operacao == 'M') printf("%.1lf\n", soma / qtd);

    return 0;
}