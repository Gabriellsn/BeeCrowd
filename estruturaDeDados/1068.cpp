#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int verifica(char *s){
    int i = 0;
    if(*s == ')') return 0;
    while((*s) && i >= 0){
        if(*s == '('){
            i++;
        }
        if(*s == ')'){
            i--;
        }
        s++;
    }

    if(i == 0){
        return 1;
    }else {
        return 0;
    }
}



int main(){ 
    char operacao[1000];
    while(scanf(" %s", operacao) != EOF){
        if(verifica(operacao)){
            printf("correct\n");
        }else{
            printf("incorrect\n");
        }
    }



}
