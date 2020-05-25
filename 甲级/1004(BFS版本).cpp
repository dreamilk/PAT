#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

const int MAXV=10000;
vector<int> G[MAXV];

int leaf[MAXV];
int N,M;

int max_h;
int h[MAXV];

void BFS(){
	queue<int> Q;
	Q.push(1);
	while(!Q.empty()){
		int y=Q.front();
		Q.pop();
		if(h[y]>max_h){
			max_h=h[y];
		}
		if(G[y].size()==0){
			leaf[h[y]]++;
		}else{
			for(int i=0;i<G[y].size();i++){
				Q.push(G[y][i]);
				h[G[y][i]]=h[y]+1;
			}
		}
	}
}

int main(){
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++){
		int id,num;
		scanf("%d%d",&id,&num);
		for(int i=0;i<num;i++){
			int c;
			scanf("%d",&c);
			G[id].push_back(c);
		}
	}
	h[1]=1;
	BFS();
	
	printf("%d",leaf[1]);
	for(int j=2;j<=max_h;j++){
		printf(" %d",leaf[j]);
	}
}

