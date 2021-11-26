#include <stdio.h>
#include <string.h>
int main(void){
  char str[1000001];
  int str1[1000001];
  int a=0;
  int len,check, count;
  fgets(str,10000001,stdin);
  len=strlen(str);
  for(int i=0; i<len-1; i++){
    if(('a'<= str[i] && str[i]<='z')||('A'<= str[i] && str[i]<='Z')) check=1;
    else if(str[i]==' ') check=0;
    str1[i]=check;
    if(str1[i-1]==1 && str1[i]==0) count+=1;
    //printf("%d", str1[i]);    
  }
  if(str1[len-2]==1) count+=1;
  printf("%d",count);
  return 0;
}