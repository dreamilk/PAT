#include<stdio.h>
#include<string.h>

char a[100];
int flag=0;
int flag1=1;
int num=0;

int main(){
	scanf("%s",a);
	if(a[0]=='+'){
		flag=1;
	}else{
		flag=-1;
		printf("-");
	}
	int epos=0;
	for(int i=2;i<strlen(a);i++){
		if(a[i]=='E'){
			epos=i;
			break;
		}
	}
	if(a[epos+1]=='-'){
		flag1=-1;
	}else{
		flag1=1;
	}
	
	for(int i=epos+2;i<strlen(a);i++){
		num=num*10+a[i]-'0';
	} 
	
	
	if(flag1==-1){
		for(int i=0;i<num;i++){
			if(i==0){
				printf("0.");
			}else{
				printf("0");
			}
			
		}
		for(int i=1;i<epos;i++){
			if(a[i]=='.'){
				continue;
			}
			printf("%d",a[i]-'0');
		}
		
	}else{
		int x=num+1;
		if(epos-3<=num){
			for(int i=1;i<epos;i++){
				if(a[i]=='.'){
					continue;
				}else{
					printf("%d",a[i]-'0');
				}
			}
			for(int i=0;i<num-epos+3;i++){
				printf("0");
			}
			
			
		}
		else{

		for(int i=1;i<epos;i++){
			if(a[i]=='.'){
				continue;
			}
			if(i==x){
				printf("%d.",a[i]-'0');
			}else{
				printf("%d",a[i]-'0');
			}
			
	    	}
    	}
		
	}
	
} 
