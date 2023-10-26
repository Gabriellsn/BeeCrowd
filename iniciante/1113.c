#include <stdio.h>
 
int main() {
    int x = 0, a, b;
    while( x != 1){
        scanf("%d %d", &a, &b);
        if(a < b){
            printf("Crescente\n");
        }else if(b < a){
            printf("Decrescente\n");
        }else{
            x = 1;
            continue;
        }
        
    }
 
    return 0;
}