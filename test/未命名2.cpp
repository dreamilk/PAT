#include<vector>
#include<set>
#include<cstdio>
using namespace std;

int N=0;

int cal(int x){
	if(x==1) return 1;
	int res=0;
	while(x!=0){
		int a=x%10;
		x=x/10;
		res=res+a*a*a;		
	}
	
	return res;
}


int main(){
	scanf("%d",&N);
	while(N--){
		int a=0;
		scanf("%d",&a);
		set<int> s;
		int c =cal(a);
		if(a==1){
			printf("0\n");
			continue;
		}
		int ans=1;
		int f=0;
		while(s.find(c)==s.end()){
			s.insert(c);
			c=cal(c);
			ans++;
			if(c==1){
				printf("%d\n",ans);
				f=1;
				break;
			}
		}
		if(f==0){
				printf("%d\n",c);		
		}	
		
	}
}
