#include <stdio.h>
 
int main() {
    int x = 0, y = 0;
    float s = 0;
    while(x != 39){
        if(x == 0 && y == 0){
            x += 1;
            y += 1;
        }else{
            y *= 2;
            x += 2;
        }
        s += (float)x / y;
    }
   printf("%.2f\n",s);
    return 0;
}