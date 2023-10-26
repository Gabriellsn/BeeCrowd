#include <stdio.h>

int main()
{   
    double salario = 0;
    int numero, horas = 0;
    scanf("%d %d", &numero, &horas);
    scanf("%lf", &salario);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, (salario * horas));
    return 0;
}