#include<stdio.h>
#include<string.h>

int n[100];

void prt(int n){
  switch(n){
  	case 0:printf("ling");break;
    case 1:printf("yi");break; 
    case 2:printf("er");break;
    case 3:printf("san");break;
    case 4:printf("si");break;
    case 5:printf("wu");break;
    case 6:printf("liu");break;
    case 7:printf("qi");break;
    case 8:printf("ba");break;
    case 9:printf("jiu");break;
  }
}

int main(){
  char s[100];
  int a=0;
  scanf("%s",s);
  for(int i=0;i<strlen(s);i++){
       n[i]=s[i]-'0';
        a=a+n[i];
  }
  int b[100];
  int j=0;
  while(a!=0){
  	b[j++]=a%10;
    a=a/10;
  }
  
  for(j=j-1;j>=0;j--){
    prt(b[j]);
    if(j!=0){
        printf(" ");	
	}
  }
}
