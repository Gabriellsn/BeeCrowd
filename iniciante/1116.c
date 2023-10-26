#include <stdio.h>
 
int main() {
    float x, n1, n2;
    scanf("%f", &x);
    for(int i = 0; i < x; i++){
        scanf("%f %f", &n1, &n2);
        if( n2 == 0){
            printf("divisao impossivel\n");
            
        }else{
            printf("%.1f\n", n1 / n2);
        }
    }
 
    return 0;
}