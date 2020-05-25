#include<stdio.h>

long long a,b;
int d;
int r[100];
int n=0;

void getR(long long x){
	while(x!=0){
		r[n++]=x%d;
		x=x/d;
	}
}

int main(){
	scanf("%lld %lld %d",&a,&b,&d);
	long long sum=a+b;
	getR(sum);
	for(int i=0;i<n;i++){
		printf("%d",r[n-i-1]);
	}
		
}
