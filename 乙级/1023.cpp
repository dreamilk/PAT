#include<stdio.h>

int a[10];

int main(){
	for(int i=0;i<10;i++){
		scanf("%d",a+i);
	}
	for(int i=1;i<10;i++){
		if(a[i]!=0){
			printf("%d",i);
			a[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<a[i];j++){
			printf("%d",i);
		}
	}
	
	
}
