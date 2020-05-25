#include<stdio.h>
#include<string.h>

char str[100];


int cal(){
	int result=0;
	for(int i=0;i<strlen(str);i++){
		result=result+(str[i]-'0');
	}
	return result;
}

void prt(int a){
	switch(a){
		case 0:printf("zero");break;
		case 1:printf("one");break;
		case 2:printf("two");break;
		case 3:printf("three");break;
		case 4:printf("four");break;
		case 5:printf("five");break;
		case 6:printf("six");break;
		case 7:printf("seven");break;
		case 8:printf("eight");break;
		case 9:printf("nine");break;
	}
}

int main(){
	int sum;
	scanf("%s",str);
	sum=cal();
	int b[100];
	int i=0;
	if(sum==0){
		printf("zero");
		return 0;
	}
	while(sum!=0){
		b[i++]=sum%10;
		sum=sum/10;
	}
	for(int j=i-1;j>=0;j--){
		prt(b[j]);
		if(j!=0){
			printf(" ");
		}
	}
}
