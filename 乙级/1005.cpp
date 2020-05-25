#include<stdio.h>
#include<map>
using namespace std;

int n;
map<int,int> m;
int a[100];
int b=0;

void fun(int a){
	if(a==1) return ;
	if(a%2==0){
		if(m.find(a/2)!=m.end()){
			m[a/2]++;
			return fun(a/2);
		}else{
			return fun(a/2);
		}
	}else{
		if(m.find((3*a+1)/2)!=m.end()){
			m[(3*a+1)/2]++;
			return fun((3*a+1)/2);
		}else{
			return fun((3*a+1)/2);
		}
	}
}


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		m[a]=0;
	}
	map<int,int>::iterator it;
	
	for(it=m.begin();it!=m.end();it++){
		fun(it->first);
	}
	
	for(it=m.begin();it!=m.end();it++){
		if(it->second==0){
			a[b++]=it->first;
		}
		
	}
	
	for(int i=b-1;i>=0;i--){
		printf("%d",a[i]);
		if(i!=0){
			printf(" ");
		}
	}
}
