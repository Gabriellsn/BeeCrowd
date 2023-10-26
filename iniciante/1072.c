#include <stdio.h>
 
int main() {
    int in = 0, out = 0, x;
    scanf("%d", &x);
    int y[x];
    
    for(int i = 0; i < x; i++){
        scanf("%d", &y[i]);
        if(y[i] > 9 && y[i] < 21){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
 
    return 0;
}