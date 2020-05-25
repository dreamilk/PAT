#include<stdio.h>
#include<algorithm>

using namespace std;

int n;
int ma,mi;
int a[4];

void getNum(int x){
	for(int i=0;i<4;i++){
		a[3-i]=x%10;
		x=x/10;
	}
	
	sort(a,a+4);
	ma=a[3]*1000+a[2]*100+a[1]*10+a[0];
	mi=a[0]*1000+a[1]*100+a[2]*10+a[3];
}


int main(){
	scanf("%d",&n);
	getNum(n);
	int result=0;
	if(ma==mi){
		printf("%d - %d = 0000",ma,mi);
	}else{
		do{
		result=ma-mi;
		printf("%d - %04d = %04d",ma,mi,result);
		if(result!=6174){
			printf("\n");
		}
		getNum(result);
		}while(result!=6174);
	}
}
