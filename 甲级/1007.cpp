#include<stdio.h>

int K;
int a[10000];

int x,y;
int x1,y1;
int sum;

void fun(){
	int flag=0;
	for(int i=0;i<K;i++){
		if(a[i]>=0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		sum=0;
		x=a[0];
		y=a[K-1];
		return;
	}
	
	for(int i=0;i<K;i++){
		int temp=a[i];
		for(int j=i;j<K;j++){
			if(j!=i){
			temp=temp+a[j];
			}
			if(temp>sum){
				sum=temp;
				x1=i;
				y1=j;
				x=a[i];
				y=a[j];
			}else if(temp==sum){
				if(i<x1||j<y1){
				x1=i;
				y1=j;
				x=a[i];
				y=a[j];
				}
			}
		}
	}
}

int main(){
	scanf("%d",&K);
	for(int i=0;i<K;i++){
		scanf("%d",a+i);
	}
	
	fun();
	printf("%d %d %d",sum,x,y);
} 
