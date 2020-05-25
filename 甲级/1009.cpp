#include<stdio.h>

int K1,L1;
float a[1000];
int K2,L2;
float b[1000];

int K3,L3;
double r[2001]={0.0};

void find(){
	
	for(int i=0;i<=L1;i++){
		for(int j=0;j<=L2;j++){
			r[i+j]+=a[i]*b[j];	
		}
	}
	L3=L1+L2;
	
	K3=0;
	for(int v=L3;v>=0;v--){
		if(r[v]!=0){
			K3++;
		}
	} 
}

int main(){
	scanf("%d",&K1);
	for(int i=0;i<K1;i++){
		int e;
		scanf("%d",&e);
		if(e>L1){
			L1=e;
		}
		double c;
		scanf("%lf",&c);
		a[e]=c;
	}
	scanf("%d",&K2);
	for(int i=0;i<K2;i++){
		int e;
		scanf("%d",&e);
		if(e>L2){
			L2=e;
		}
		double c;
		scanf("%lf",&c);
		b[e]=c;
	}
	find();
	
	printf("%d",K3);
	for(int i=L3;i>=0;i--){
		if(r[i]!=0){
			printf(" %d",i);
			printf(" %.1lf",r[i]);
		}
	}
	
}
