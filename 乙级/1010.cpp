#include<stdio.h>
#include<map>
using namespace std;

map<int,int> m;

int main(){	
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b!=0){
			m[b-1]=a*b;
		}
	}
	int n=0;
	if(m.size()==0){
		printf("0 0");
		return 0;
	}
	for(map<int,int>::reverse_iterator it=m.rbegin();it!=m.rend();it++){
		printf("%d %d",it->second,it->first);
		n++;
		if(n!=m.size()){
			printf(" ");
		}
	} 

	
}
