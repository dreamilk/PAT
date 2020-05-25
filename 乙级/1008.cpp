#include<stdio.h>

int a[100];
int n;
int m;


int main(){
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int k=n-(m%n);
	
	for(int i=k;i<n;i++){
		printf("%d ",a[i]);
	}
	for(int i=0;i<k;i++){
		printf("%d",a[i]);
		if(i!=k-1){
			printf(" ");
		}
	}
	
}
