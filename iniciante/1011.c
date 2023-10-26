#include <stdio.h>
 
int main() {
 float raio;
 scanf("%f", &raio);
 printf("VOLUME = %.3lf\n",(((raio * raio * raio)* 3.14159) * 4.0) / 3);
    return 0; 
}