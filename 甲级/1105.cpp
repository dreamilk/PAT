#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std; 

int N;
const int MAX=10010; 
int a[MAX]={0};

int m,n;

void fun(int t){

}



int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",a+i);
	}
	sort(a,a+N);
	int sqr=sqrt(N);
	while(N%sqr!=0){
		sqr--;
	}
	n=sqr;
	m=N/sqr;
	
	vector<vector<int> > ans(m,vector<int>(n,0));
	
	int pos=0;
	int flag=1;
	int i=0,j=0;
	int c=0;
	while(pos<N){
		ans[i][j]=a[pos];
		
		if(flag==1&&j<n-1-c){
			j++;
		}else if(flag==1&&j==n-1-c){
			flag=2;
			i++;
		}else if(flag==2&&i<m-1-c){
			i++;
		}else if(flag==2&&i==m-1-c){
			flag=3;
			j--;
		}else if(flag==3&&j>c){
			j--;
		}else if(flag==3&&j==c){
			flag=4;
			i--;
		}else if(flag==4&&i>c+1){
			i--;
		}else if(flag==4&&i==c+1){
			flag=1;
			c=c+1;
			j++;
		}

		
		
		pos++;
	}
	
	
	
	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",ans[m][n]);
			if(j==n-1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
}
