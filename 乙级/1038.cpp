#include<stdio.h>

int n;
int a[100000];
int k;
int b[100000];
int c[100]={0};

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		c[a[i]]++;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<k;i++){
		printf("%d",c[b[i]]);
		if(i!=k-1){
			printf(" ");
		}
	}
	
	
	
}
