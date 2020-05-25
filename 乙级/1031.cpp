#include<stdio.h>

int n;
char a[18];
int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};

int main(){
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a);
		int flag=0;
		int result=0;
		for(int j=0;j<17;j++){
			if(a[j]<='9'&&a[j]>='0'){
				result=(a[j]-'0')*b[j]+result;
			}else{
				flag=1;
				continue;
			}
		}
		if(flag==0){
		    int temp=result%11;
		    if(m[temp]==a[17]){
		    	sum=sum+1;
			}else{
			printf("%s",a);
			if(i!=n-1){
				printf("\n");
			}
				
			}
		}else{
			printf("%s",a);
			if(i!=n-1){
				printf("\n");
			}
		}
	}
	if(sum==n){
		printf("All passed");
	}
	
} 
