#include <stdio.h>
 
int main() {
 int nota;
 scanf("%d", &nota);
 if(nota == 0){
    printf("E\n");    
}
 if(nota > 0 && nota < 36){
     printf("D\n");
 } 
  else if(nota > 35 && nota < 61){
     printf("C\n");
 }
 else if(nota > 60 && nota < 86){
     printf("B\n");
 }
 else{
     printf("A\n");
 }
}