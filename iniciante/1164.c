#include <stdio.h>
 
int main() {
 int quantidade, x, soma = 0;
 scanf("%d", &quantidade);
 for(int i = 0; i < quantidade; i++){
     soma = 0;
     scanf("%d", &x);
     for(int j = 1; j < x; j++){
         if( x % j == 0){
             soma += j;
         }
     }
     
     printf(soma == x? "%d eh perfeito\n" : "%d nao eh perfeito\n", x);
 }
    return 0;
}