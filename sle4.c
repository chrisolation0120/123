#include <stdio.h>

int main(void){
  int testcase;
  int test, testcount=0;
  int jumsu;
  int c=0;
 
  scanf("%d" ,&testcase);
 
  float junglee[testcase];
  while(1){
    
    scanf("%d",&test);
    int a[test];
    int total=0;
    float count=0;
    float average=0;
    float aver=0;
    for(int i=0; i<test; i++){
   
      scanf("%d", &jumsu);
      a[i]=jumsu;
      total+=a[i];
    }
    aver = total/test;
    
    for(int i=0; i<test; i++){
      if(a[i]>aver) count=count+1;
    }
    average = count/test*100;    

    junglee[c]=average;
    c++;
    testcount++;

    if(testcount==testcase) break; 
    }
    for(int i=0; i<testcase; i++)
      printf("%.3f%%\n",junglee[i]);
  return 0;
}