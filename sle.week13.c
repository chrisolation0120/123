#include <stdio.h>
int main(void) {
  int M, N, i, j;
  int arr[1000001] = {0, }; arr[0] = 1, arr[1] = 1; 
  for(j = 2; j < 1000001 / j; j++) { 
    if(arr[j] == 1) continue;   //arr가 1이 아닐시 아래 생략
    for(i = j * j; i < 1000001; i += j){ // i를 계속 누적시켜서 해당 누적은 다 1 체크 -> 짝수, 3을 계속 더한 수,,, 등의 역할을 하는 반복문
      if(i % j == 0) arr[i] = 1;  //나누어지면 1체크
    }
  } 
  scanf("%d %d", &M, &N); 
  for(i = M; i <= N; i++) 
    if(arr[i] == 0) printf("%d\n", i); 
  return 0; 
}
