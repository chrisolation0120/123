#include <stdio.h>

int main(void) {
  int sub, score, max=0;
  int i;
  float sum=0, avg;
  scanf("%d" ,&sub);

  float x[sub];
  float y[sub];
  
  for(i=0; i<sub; i++){
    scanf("%d" ,&score);
    x[i] = score;
    if (max<score) max= score;
  }
  for(i=0; i<sub; i++){
    y[i] =(x[i]/max)*100;
    sum = sum+y[i];
  }
  avg = sum/sub;
  
  printf("%f",avg);
  return 0;
}