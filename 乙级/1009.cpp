#include<cstdio>
#include<cstring>

char r[90][90];

int main(){
	char str[100];
    gets(str);
	int len=strlen(str);
	int m=0;
	int n=0;
	for(int i=0;i<len;i++){
		if(str[i]!=' '){
			r[n][m++]=str[i];
		}else{
			r[n][m]='\0';
			n++;
			m=0;
		}
	}
	
	for(int i=n;i>=0;i--){
		printf("%s",r[i]);
		if(i!=0){
			printf(" ");
		}
	}
}
