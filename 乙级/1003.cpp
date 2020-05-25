#include<stdio.h>
#include<string.h>

char str[10][100];
int n;



bool fun(char* str){
	//ÅĞ¶ÏÊÇ·ñÈ«Îªpat
	 
	for(int i=0;i<strlen(str);i++){
		if(str[i]!='P'&&str[i]!='A'&&str[i]!='T'){
			return false;
		}
	}
	int len=strlen(str);
	int p_num=0;
	int t_num=0;
	
	int a1=0;
	int a2=0;
	int a3=0;
	
	for(int i=0;i<len;i++){
		if(str[i]=='A'&&p_num==0&&t_num==0){
			a1++;
			continue;
		}
		if(str[i]=='A'&&p_num==1&&t_num==0){
			a2++;
			continue;
		}
		if(str[i]=='A'&&p_num==1&&t_num==1){
			a3++;
			continue;
		}
		
		if(str[i]=='P'){
			p_num++;
		}
		if(str[i]=='T'){
			t_num++;
		}
		
		if(p_num>1||t_num>1){
			return false;
		}
	}
//	printf("%d %d %d",a1,a2,a3);
	
	if(a1==a3&&p_num==1&&t_num==1&&a2==1){
		return true;
	}
	
	if(p_num==1&&t_num==1&&a2>1){
		if((a3-(a2-1)*a1)==a1){
			return true;
		}
	}
	
	return false;
	
}




int main(){
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(int i=0;i<n;i++){
		if(fun(str[i])){
			printf("YES");
		}else{
		    printf("NO");
		}
		if(i<=n-1){
			printf("\n");
		}
	}
	
} 
