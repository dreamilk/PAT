#include<cstdio>
#include<cmath>

bool isprime(int n){
	if(n<=2)return false;
	int s=(int)sqrt(1.0*n);
	for(int i=2;i<=s;i++){
		if(n%i==0)return false;
	}
	return true;
}

void prt(int n){
	int p=n/2;
	int sum=0;
	for(int i=p;i>=2;i--){
		int a=i;
		int b=n-i;
		
		if(isprime(a)&&isprime(b)){
			printf("%d + %d = %d \n",a,b,n);
			sum++;
		}
	}
	
	printf("�ܼƴ𰸣�%d\n",sum);
}

int main(){
	printf("������һλż����\n");
	int m;
	scanf("%d",&m);
	
	while((m%2!=0)||m<6){
		printf("���������룺\n");
    	scanf("%d",&m);
	}
	prt(m);
	
	
} 
