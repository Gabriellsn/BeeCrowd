#include <stdio.h>
 
int main() {
    float x[6], soma = 0;
    int media = 0;
        for(int i = 0; i < 6; i++){
        	scanf("%f", &x[i]);
            if(x[i] >= 0){
                soma += x[i];
                media++;
            }
        }
        printf("%d valores positivos\n", media);
        printf("%.1f\n", soma / media);
    return 0;
}