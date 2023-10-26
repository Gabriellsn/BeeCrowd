#include <stdio.h>
 
int main() {
    int contador;
    scanf("%d", &contador);
    float x, y, z;
    for(int i = 0; i < contador; i++){
        scanf("%f %f %f", &x, &y, &z);
        printf("%.1f\n", ((x * 2) + (y * 3) + (z * 5))/10);
    }
 
    return 0;
}