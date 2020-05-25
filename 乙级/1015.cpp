#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int N,L,H,M;

typedef struct Student{
	int id;
	int ds;
	int cs;
}Student;

vector<Student> v;

int fen(Student x){
	if(x.ds>=H&&x.cs>=H){
		return 1;
	}
	if(x.ds>=H&&x.cs<H){
		return 2;
	}
	if(x.ds<H&&x.cs<H&&x.ds>=x.cs){
		return 3;
	}
	return 4;
}

bool cmp(Student a,Student b){
	if(fen(a)!=fen(b)){
		return fen(a)<fen(b);
	}
	if((a.ds+a.cs)!=(b.ds+b.cs)){
		return (a.ds+a.cs)>(b.ds+b.cs);
	}
	if(a.ds!=b.ds){
		return a.ds>b.ds;
	}
	return a.id<b.id;
	
}

int main(){
	scanf("%d",&N);
	scanf("%d",&L);
	scanf("%d",&H);
	for(int i=0;i<N;i++){
		Student s;
		scanf("%d%d%d",&s.id,&s.ds,&s.cs);
		if(s.ds>=L&&s.cs>=L){
			M++;
			v.push_back(s);
		}
	}
	sort(v.begin(),v.end(),cmp);
	printf("%d\n",M);
	int p=0;
	for(vector<Student>::iterator it=v.begin();it!=v.end();it++){
		printf("%d %d %d",(*it).id,(*it).ds,(*it).cs);
		p++;
		if(p!=M){
			printf("\n");
		}
	}
	
	
} 
