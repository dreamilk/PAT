#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

struct Data{
  int id;
  string name;
  int score;
};

vector<Data> vi;
int n,x;

bool cmp1(Data a,Data b){
  if(a.id!=b.id){
  	return a.id<b.id;
  }else if(a.id==b.id){
  	return a.name<b.name;
  }
}

bool cmp2(Data a,Data b){
	if(a.name!=b.name){
		return a.name<b.name;
	}else 
	return a.id<b.id;
}

bool cmp3(Data a,Data b){
	if(b.score!=a.score){
		return a.score<b.score;
	}else
	return a.id<b.id;
}

int main(){
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;i++){
		Data temp;
		scanf("%d",&temp.id);
		cin>>temp.name;
		scanf("%d",&temp.score);
	} 
	
	if(x==1){
		sort(vi.begin(),vi.end(),cmp1);
	}else if(x==2){
		sort(vi.begin(),vi.end(),cmp2);
	}else if(x==3){
		sort(vi.begin(),vi.end(),cmp3);
	}
	for(int i=0;i<vi.size();i++){
		printf("%06d ",vi[i].id);
		printf("%s ",vi[i].name.c_str());
		printf("%d",vi[i].score);
		if(i!=n){
			printf("\n");
		}
	}
}

