#include<stdio.h>

int main()
{
    int y, n1, n2, ans;
    scanf("%d",&y);
    for(int i = 0; i < y; i++ ){
        ans = 0;
        scanf("%d %d",&n1 , &n2 );
        if(n1 < n2){
            for(n2--; n1 < n2; n2--){
                if(n2 % 2 != 0){
                    ans += n2;
                }
            }
        }else{
            for(n1--; n2 < n1; n1--){
                if(n1 % 2 != 0){
                   ans += n1;         
                }
            }
        
        }
        printf("%d\n", ans);
    }
    return 0;
}