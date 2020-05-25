#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int n,p;

int a=0;
int b=0;
int r=0;

void findAB(){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(v[i]*p>=v[j]){
				int te=j-i+1;
				if(r<te){
				    r=te;	
				}
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&p);
	for(int i=0;i<n;i++){
		int temp=0;
		scanf("%d",&temp);
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	findAB();
	printf("%d",r);
	
} 
