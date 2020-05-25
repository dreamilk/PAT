#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

struct Person{
	char name[10];
	int y;
	int m;
	int d;
};

vector<Person> v;
int n;
int r;

bool cmp(Person a,Person b){
	int at=a.y*10000+a.m*100+a.d;
	int bt=b.y*10000+b.m*100+b.d;
	return (bt-at>=0)?true:false;
	
//	if(a.y<b.y){
//		return true;
//	}
//	if(a.y==b.y){
//		if(a.m<b.m){
//			return true;
//		}
//		if(a.m==b.m){
//			if(a.d<b.d){
//				return true;
//			}
//			if(a.d==b.d){
//				return true;
//			}
//			if(a.d>b.d){
//				return false;
//			}
//		}
//		if(a.m>b.m){
//			return false;
//		}
//	}
//	if(a.y>b.y){
//		return false;
//	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		Person p;
		scanf("%s",p.name);
		char temp[100];
		scanf("%s",temp);
		sscanf(temp,"%d/%d/%d",&p.y,&p.m,&p.d);
		int pt=p.y*10000+p.m*100+p.d;
		int nt=20140906;
		if(pt<=nt&&pt>=18140906){
			r++;
			v.push_back(p);
		}
		
	}
	sort(v.begin(),v.end(),cmp);
	printf("%d ",r);
	printf("%s ",v[0].name);
	printf("%s",v[r-1].name);
	
}
 
