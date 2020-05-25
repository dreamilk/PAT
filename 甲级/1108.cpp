#include<cstdio>
#include<cstring>

using namespace std;

int n=0;
int num=0;
double sum=0;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char str[10];
		scanf("%s",str);
		double t;
		sscanf(str,"%lf",&t);
		char a[10];
		sprintf(a,"%.2f",t);
		int flag=1;
		if(t<-1000||t>1000){
			flag=0;
		}
		for(int j=0;j<strlen(str);j++){
			if(str[j]!=a[j]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			num++;
			sum=sum+t;
		}else{
			printf("ERROR: %s is not a legal number\n",str);
		}
		
	}
	if(num==0){
		printf("The average of 0 numbers is Undefined");
	}else if(num==1){
		printf("The average of 1 number is %0.2f",sum);
	}else {
		printf("The average of %d numbers is %0.2f",num,sum/num);
	}
} 
