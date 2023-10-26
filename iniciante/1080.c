int main() {
    int maior = 0, x, contador;
    for(int i = 1; i <= 100; i++){
        scanf("%d", &x);
        if(x > maior){
            maior = x;
            contador = i;

        }
    }   
    printf("%d\n%d\n", maior,contador);
    return 0;
}