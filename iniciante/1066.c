#include <stdio.h>
 #include<stdlib.h>
int main() {
	system("color F0");
    int  num[5], positivos = 0, impares = 0, negativos=0, pares = 0;
    
    for(int i = 0; i < 5; i++){
    	scanf("%d", &num[i]);
        if(num[i] > 0){
            positivos++;
        }else if(num[i] < 0){
            negativos++;
        }
        if(num[i] % 2 == 0 && num[i] != 1){
            pares++;
        }else if(num[i] % 2 != 0){
            impares++;
        } 
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
 
    return 0;
}
