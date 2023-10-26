#include <stdio.h>
 
int main() {
    int x, y = 1;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        printf("%d %d %d PUM\n",y , y + 1, y + 2);
        y += 4;
    }
    return 0;
}