#include<stdio.h>
#include<string.h>

int r[10]={0};
int a[1000];
char str[1001];

int main(){
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		a[i]=str[i]-'0';
		r[a[i]]++;
	}
	
	int n=0;
	for(int i=0;i<10;i++){
		if(r[i]!=0){
			n++;
		}
	}
	int m=0;
	for(int i=0;i<10;i++){
		if(r[i]!=0){
			
			printf("%d:%d",i,r[i]);
			m++;
			if(m!=n){
				printf("\n");
			}
		}
	}
}
