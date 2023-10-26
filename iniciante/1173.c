#include <stdio.h>
 
int main() {
    int x[10] , v;
    scanf("%d", &v);
    x[0] = v;
    for(int i = 0; i < 10; i++){
        if( i != 0){
            x[i] = x[i-1] * 2;
        }
        printf("N[%d] = %d\n", i, x[i]);
    }
 
    return 0;
}