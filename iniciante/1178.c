#include <stdio.h>

int main(void){
  double y;
  scanf("%lf",&y);
  for(int i = 0; i < 100; i++){
    printf("N[%d] = %.4lf\n", i, y);
      y = y / 2;

  }

    



  
  return 0;
}
