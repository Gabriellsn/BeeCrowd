#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    while(x != 0){
        
        if(x % 2 == 0){
            printf("%d\n",  x + (x+2) + (x + 4) + (x + 6)+ ( x + 8));
        }else{
            printf("%d\n", (x + 1) + (x + 3) + (x + 5)+ ( x + 7) + (x + 9));
        }
        scanf("%d", &x);
    }
    return 0;
}