#include<stdio.h>
#include<map>

using namespace std;

int n,d,e;
double v; 
int a[1000];
int b[1000];
double c[1000];
map<double,int> m;

int main(){
	scanf("%d",&n);
	scanf("%d",&d);
	e=d;
	v=0.00;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		c[i]=(double)b[i]/(double)a[i];
		m[c[i]]=i;
	}
	
	for(map<double,int>::reverse_iterator it=m.rbegin();it!=m.rend();it++){
//		printf("%lf  %d\n",it->first,it->second);
		if(e>=a[it->second]){
			e=e-a[it->second];
			v=v+b[it->second];
			if(e==0){
				break;
			}
		}else{
			v=v+e*it->first;
			e=0;
			break;
		}
	}
	
	printf("%.2f",v);
	
	
	
	
}
