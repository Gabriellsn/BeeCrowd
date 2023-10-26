#include <stdio.h>
 
int main() {
    float x[100];
    for(int j = 0; j < 100; j++){
        scanf("%f", &x[j]);
    }
    for(int i = 0; i < 100 ; i++){
        if(x[i] <= 10){
            printf("A[%d] = %.1f\n", i, x[i]);
        }
    }
 
    return 0;
}