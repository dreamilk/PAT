#include<stdio.h>

int n;

int main(){
	scanf("%d",&n);
	int now=0;
	int time=0;
	
	for(int i=0;i<n;i++){
		int b=0;
		scanf("%d",&b);
		
		
		if(b>now){
			time=time+(b-now)*6;
			time=time+5;
			now=b;
		}else if(b==now){
			time=time+5;
			now=b;
		}else if(b<now){
			time=time+(now-b)*4;
			time=time+5;
			now=b;
		}
		
	}
	printf("%d",time);
	
}
