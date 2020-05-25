#include<stdio.h>

int n;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true",i+1);
		}else{
			printf("Case #%d: false",i+1);
		}
		if(i!=n-1){
			printf("\n");
		}
	}
}
