#include<stdio.h>
#include<vector>
using namespace std;

const int MAXV=10000;

vector<int> pre[MAXV];

int N,M;

int n[MAXV];

int sum;

int level;
void DFS(int a){
	if(pre[a].size()==0){
		n[level]++;
		if(level>sum){
			sum=level;
		}
		return;
	}
	level++;
	for(int i=0;i<pre[a].size();i++){
		DFS(pre[a][i]);
	}
	level--;
}

int main(){
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++){
		int id,num;
		scanf("%d%d",&id,&num);
		for(int j=0;j<num;j++){
			int chirld;
			scanf("%d",&chirld);
			pre[id].push_back(chirld);
		}
	}
	DFS(01);
	for(int j=0;j<=sum;j++){
		printf("%d",n[j]);
		if(j!=sum){
			printf(" ");
		}
	}
	
	
} 
