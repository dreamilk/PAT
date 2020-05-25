#include<stdio.h>
#include<algorithm>
#include<math.h> 

using namespace std;

int n;
int a[10000];
int b[100][100];
int p,q;

void getP(){
	int sqr=sqrt(n*1.0);
	q=sqr;//lie
	p=n/q;//hang
}

void prt(int w,int x){
	for(int i=0;i<q;i++){
		b[w][w+i]=a[x++];
	}
	for(int i=0;i<p-1;i++){
		b[w+i+1][w+q-1]=a[x++];
	}
	for(int i=0;i<q-1;i++){
		b[w+p-1][w+q-1-i]=a[x++];
	}
	for(int i=0;i<p-2;i++){
		b[w][w+p-2-i]=a[x++];
	}
	
}


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	getP();
	
	prt(0,0);
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

