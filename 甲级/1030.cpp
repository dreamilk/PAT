#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

const int MAXV=1000;
const int INF=1000000;

int N,M,S,D;
int G[MAXV][MAXV];
int C[MAXV][MAXV];

int d[MAXV];
int visit[MAXV]={0};

vector<int> pre[MAXV];
vector<int> tempath;
vector<int> path;
int sum=INF;

void Dijkstra(int v){
	fill(d,d+MAXV,INF);
	d[v]=0;
	for(int i=0;i<N;i++){
		int u=-1;
		int min=INF;
		for(int j=0;j<N;j++){
			if(visit[j]==0&&d[j]<min){
				min=d[j];
				u=j;
			}
		}
		
		if(u==-1) return;
		visit[u]=1;
		for(int j=0;j<N;j++){
			if(visit[j]==0&&G[u][j]!=INF){
				if(d[u]+G[u][j]<d[j]){
					d[j]=d[u]+G[u][j];
					pre[j].clear();
					pre[j].push_back(u);
				}else if(d[u]+G[u][j]==d[j]){
					pre[j].push_back(u);
				}
			}
		}
	}
}

void DFS(int v){
	if(v==S){
		tempath.push_back(v);
		int temp=0;
		for(int i=tempath.size()-1;i>0;i--){
			int c1=tempath[i];
			int c2=tempath[i-1];
			temp=temp+C[c1][c2];
		}
		if(temp<sum){
			sum=temp;
			path=tempath;
		}
		
		tempath.pop_back();
		return;
		
	}
	tempath.push_back(v);
	for(int i=0;i<pre[v].size();i++){
		DFS(pre[v][i]);
	}
	tempath.pop_back();
}

int main(){
	scanf("%d%d%d%d",&N,&M,&S,&D);
	fill(G[0],G[0]+MAXV*MAXV,INF);
	fill(C[0],C[0]+MAXV*MAXV,INF);
	
	for(int i=0;i<M;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		int dis,cost;
		scanf("%d%d",&dis,&cost);
		G[x][y]=dis;
		G[y][x]=dis;
		C[x][y]=cost;
		C[y][x]=cost;
	}
	
	Dijkstra(S);
	DFS(D);
	for(int i=path.size()-1;i>=0;i--){
		printf("%d ",path[i]);
	}
	printf("%d ",d[D]);
	printf("%d",sum);
	
}
