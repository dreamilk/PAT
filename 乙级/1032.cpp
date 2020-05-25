#include<stdio.h>

int n;
int a[100000]={0};

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x=0;
		int y=0;
		scanf("%d %d",&x,&y);
		a[x]=a[x]+y;
	}
	
	int x=0; 
	int temp=0;
	for(int i=1;i<n+1;i++){
		if(temp<a[i]){
			temp=a[i];
			x=i;
		}
	}
	
	printf("%d %d",x,temp);
} 
