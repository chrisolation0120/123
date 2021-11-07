
#include <stdio.h> 

int sum(int n) {
   int sum = n;
  while(n>0) {
    sum += n%10;
    n/=10;
  }
  return sum;
}
int main(void) {
  int arr[10001], i, check;
  for(i=1; i<10001; i++) {
    check = sum(i);
    if(check <10001) arr[check]=1;
     //셀프 넘버가 아닌 수 확인  
  }
  for(i=1; i<10001; i++) { 
    if(arr[i]!=1) //셀프 넘버 수 확인 
      printf("%d\n", i); 
    }
  return 0; 
}

/*
#include <stdio.h>

int main(void) {
  int n,sum;
  while(1){
    scanf("%d" ,&sum);
    n= sum;
    while(n>0) {
      sum += n%10;
      n/=10;
    }
    printf("%d",sum);
  }
  return 0;
}
*/