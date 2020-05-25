#include<stdio.h>
#include<string.h>

int a[1000]={0};
int r[1000]={0};
int b;


int main(){
	char s[1000];
	scanf("%s",s);
	scanf("%d",&b);
	for(int i=strlen(s)-1;i>=0;i--){
		a[i]=s[i]-'0';
	}
	
	int temp=0;
	int j=0;
	
	if(a[0]<b){
		temp=a[0];
	}else{
		r[j++]=a[0]/b;
		temp=a[0]%b;
	}
	
	if(strlen(s)==1){
		r[0]=0;
		j=1;
	}else{
		for(int i=1;i<strlen(s);i++){
		r[j++]=(temp*10+a[i])/b;
		temp=(temp*10+a[i])%b;
	    }	
	}
	
	for(int i=0;i<j;i++){
		printf("%d",r[i]);
	}
	printf(" ");
	printf("%d",temp);
	
	
} 
