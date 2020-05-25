#include<stdio.h>

int fun(int n){
  if(n==1) return 0;
  if(n%2==0){
    return fun(n/2)+1;
  }
  return fun((int)((3*n+1)/2))+1;
}

int main(){
  int n;
  while(scanf("%d",&n)!=EOF){
    printf("%d",fun(n));
  }
}
