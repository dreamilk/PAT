#include<stdio.h>

int k1,k2;
float a[1001];


int main(){
	scanf("%d",&k1);
	for(int i=0;i<k1;i++){
		int n=0;
		scanf("%d",&n);
		scanf("%f",&a[n]);
	}
	scanf("%d",&k2);
	for(int i=0;i<k2;i++){
		int n=0;
		scanf("%d",&n);
		float temp;
		scanf("%f",&temp);
		a[n]=a[n]+temp;
	}
	
	int num=0;
	for(int i=0;i<1001;i++){
		if(a[i]!=0){
			num=num+1;
		}
	}
	
	printf("%d",num);
	
	for(int i=1000;i>=0;i--){
		if(a[i]!=0){
			printf(" %d %.1f",i,a[i]);
		}
	}
	
}
