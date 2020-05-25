#include<stdio.h>
#include<algorithm>

using namespace std;

const int INF=1000000000;

int N,M,S,D;

int a[1000][1000];
int b[1000];
int sum=0;

int d[1000];
int v[1000];

int num[1000];
int w[1000];

void Dijkstra(int s){
	fill(num,num+1000,0);
	fill(w,w+1000,0);
	fill(d,d+1000,INF);

	num[s]=1;
	w[s]=b[s];
	d[s]=0;
	for(int i=0;i<N;i++){
		int u=-1;
		int min=INF;
		for(int j=0;j<N;j++){
			if(v[j]==0&&d[j]<min){
				u=j;
				min=d[i];
			}
		}
		
		if(u==-1)return;
		v[u]=1;
		for(int j=0;j<N;j++){
			if(v[j]==0&&a[u][j]!=INF){
				if(d[u]+a[u][j]<d[j]){
					d[j]=d[u]+a[u][j];	
					w[j]=w[u]+b[j];
					num[j]=num[u];
				}else if(d[u]+a[u][j]==d[j]){
					if(w[u]+b[j]>w[j]){
						w[j]=w[u]+b[j];
					}
					num[j]=num[j]+num[u];
				}
			}
		}
	}
	
}

int main(){
	scanf("%d %d %d %d",&N,&M,&S,&D);
	fill(a[0],a[0]+1000*1000,INF);

	fill(v,v+1000,0);
	
	for(int i=0;i<N;i++){
		scanf("%d",b+i);
	}
	for(int i=0;i<M;i++){
		int x,y;
		scanf("%d %d",&x,&y);
		scanf("%d",&a[x][y]);
		a[y][x]=a[x][y];
	}
	Dijkstra(S);
	printf("%d %d",num[D],w[D]);
	
}
