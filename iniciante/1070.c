#include <stdio.h>
 
    int main(){
        int x;
        scanf("%d", &x);
        if(x % 2 == 0){
             for(int i = 0; i <12; i++){
                 if(i == 1 || i % 2 != 0){
                     printf("%d\n", x + i);
                 }
             }
        }else{
            for(int i = 0; i < 12; i++){
                if(i % 2 == 0){
                    printf("%d\n", x + i);
                }
            }
        }
    }