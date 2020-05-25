#include<stdio.h>
#include<string.h>

char a[100];
char b[100];

char da;
char db; 

int m=0;
int n=0;

void getNum(){
	int alen=strlen(a);
	for(int i=0;i<alen;i++){
		if(a[i]==da){
			int x=da-'0';
			m=m*10+x;
		}
	}
	
	int blen=strlen(b);
	for(int i=0;i<blen;i++){
		if(b[i]==db){
			int x=db-'0';
			n=n*10+x;
		}
	}
}

int main(){
	scanf("%s",a);
	scanf("%c",&da);
	scanf("%c",&da);
	scanf("%s",b);
	scanf("%c",&db);
	scanf("%c",&db);
	
	
	
	getNum();
	printf("%d",m+n);
	
}
