#include <stdio.h>

int ultrapassandoZ(int x, int z){
    int soma = 0, cont = 0;
    for(int i = x; soma < z; i++){
        soma += i;
        cont++;
    }
    return cont;
}

int main(){
    int x, z;
    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
    scanf("%d", &z);
    }

    printf("%d\n", ultrapassandoZ(x,z));


}