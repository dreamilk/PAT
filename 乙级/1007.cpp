#include<stdio.h>
#include<math.h>

int n;

bool isP(int n){
	if(n<=1){
		return false;
	}
	int a=(int)sqrt(1.0*n);
	for(int i=2;i<=a;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}


int main(){
	scanf("%d",&n);
	int m=0;
	for(int i=n;i>3;i--){
		if(isP(i)&&isP(i-2)){
			m++;
		}
	}
	printf("%d",m);
	
}
