#include <stdio.h>
 
int main() {
 int codigo1,codigo2,n1,n2;
 float valor1, valor2; 
 scanf("%d %d %f", &codigo1, &n1, &valor1);
 scanf("%d %d %f", &codigo2, &n2, &valor2);
 printf("VALOR A PAGAR: R$ %.2f\n", (n1 * valor1)+(n2 * valor2));
 
    return 0;
}