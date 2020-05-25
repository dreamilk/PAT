#include<stdio.h>


int n=0;
char r[100];
int m=0;

void fun(){
	if(n>=100){
		for(int i=0;i<n/100;i++){
			r[m++]='B';
		}
		n=n%100;
	}
	if(n>=10){
		for(int i=0;i<n/10;i++){
			r[m++]='S';
		}
		n=n%10;
	}
	if(n>0){
		for(int i=0;i<n;i++){
			r[m++]=i+1+'0';
		}
	}
	
}


int main(){
	scanf("%d",&n);
	fun();
	printf("%s",r);
	
}
