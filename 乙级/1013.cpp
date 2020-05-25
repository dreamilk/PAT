#include<stdio.h>
#include<math.h>

int m,n;

int p[10000];
int j=0;

bool isP(int a){
	if(a<=1)return false;
	if(a==2)return true;
	int sqr=(int)sqrt(1.0*a);
	for(int i=2;i<=sqr;i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

void getP(int n){
	int i=2;
	while(j<n){
		if(isP(i)){
			p[j++]=i;
			i++;
		}else{
			i++;
		}
	}
}



int main(){
	scanf("%d%d",&m,&n);
	getP(n);
	int c=0;
	for(int i=m-1;i<n;i++){
		printf("%d",p[i]);
		c++;
		
		if(i!=n-1&&c%10!=0){
			printf(" ");
		}else if(c%10==0){
			printf("\n");
		}
	}
}
