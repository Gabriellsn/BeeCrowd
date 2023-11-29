#include <stdio.h>
#include <stdlib.h>

int  somaDeImpares(int x, int y){
    int soma = 0;
    int cont = 0;

    for(int i = x; cont < y; i++){
        if(i % 2 != 0){ 
            cont++;
            soma += i;
         }
       
        
    }
    return soma;
}

int main(){
    int x, y, qtdexec;
    scanf("%d", &qtdexec);
    for(int i = 0; i < qtdexec; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", somaDeImpares(x, y));
    }

}