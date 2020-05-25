#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

const int MAXV=1000;
const int INF=100000000;

int N,M,S,D; 
int G[MAXV][MAXV];
int weight[MAXV];

int visit[MAXV]={0};
int d[MAXV];
vector<int> pre[MAXV];
vector<int> tempath;

int num[MAXV]={0};//记录总数 
int line=0;

void Dijkstra(int s){
	fill(d,d+MAXV,INF);
	d[s]=0;
	
	num[s]=1;
	
	for(int i=0;i<N;i++){
		int u=-1;
		int min=INF;
		for(int j=0;j<N;j++){
			if(visit[j]==0&&d[j]<min){
		    	u=j;
		    	min=d[j];
	    	}	
		}

		if(u==-1) return;
		visit[u]=1;
		for(int v=0;v<N;v++){
			if(visit[v]==0&&d[u]+G[u][v]<d[v]&&G[u][v]!=INF){
				d[v]=d[u]+G[u][v];
				
				num[v]=num[u];
				
				pre[v].clear();
				pre[v].push_back(u);
			}else if(visit[v]==0&&d[u]+G[u][v]==d[v]&&G[u][v]!=INF){
				pre[v].push_back(u);
				
				num[v]+=num[u];
			}		
		}
	}
}

int value;//总值 

void DFS(int s){
	if(s==D){
		tempath.push_back(s);
		int temp=0;
		for(int i=tempath.size()-1;i>=0;i--){
			int pos=tempath[i];
			temp+=weight[pos];
		}
		if(temp>value){
			value=temp;
		}
		tempath.pop_back();
		line++;
		return;
	}
	tempath.push_back(s);
	for(int i=0;i<pre[s].size();i++){
		DFS(pre[s][i]);
	}
	tempath.pop_back();
}


int main(){
	//初始化
	fill(G[0],G[0]+MAXV*MAXV,INF);
	fill(visit,visit+MAXV,0);
	 
	scanf("%d%d%d%d",&N,&M,&S,&D);
	for(int i=0;i<N;i++){
		scanf("%d",&weight[i]);
	}
	for(int i=0;i<M;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		scanf("%d",&G[x][y]);
		G[y][x]=G[x][y];
	}
	Dijkstra(S);
	
	for(int i=0;i<N;i++){
		for(int j=0;j<pre[i].size();i++){
			printf("节点%d的前面节点有%d\n ",i,pre[i][j]);
		}
	}
	
	DFS(D);
	printf("%d %d",num[D],value);
	
	
}
