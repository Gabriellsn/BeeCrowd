#include <stdio.h>
#include <stdlib.h>


void preencheVetor(long long int vetor[61]){
    int num1 = 0, num2 = 1, num3;
    vetor[0] = num1;
    vetor[1] = num2;
    for(int i = 2; i < 61; i ++){
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
}

int main(){
     long long int vetor[61];
    int qtdExec, posicao;
    preencheVetor(vetor);
    scanf("%d", &qtdExec);
    for(int i = 0; i < qtdExec; i++){
        scanf("%d", &posicao);
        printf("Fib(%d) = %lld\n", posicao, vetor[posicao]);
    }



}