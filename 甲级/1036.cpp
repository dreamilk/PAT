#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

struct Data{
	char name[10];
	char gender;
	char id[10];
	int grade;
};

vector<Data> vm;
vector<Data> vf;
int n;

bool cmp(Data a,Data b){
	return a.grade<b.grade;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		Data temp;
		scanf("%s",temp.name);
		scanf("%s",&temp.gender);
		scanf("%s",temp.id);
		scanf("%d",&temp.grade);
		if(temp.gender=='M'){
			vm.push_back(temp);
		}else {
			vf.push_back(temp);
		}
	}
	
	sort(vm.begin(),vm.end(),cmp);
	sort(vf.begin(),vf.end(),cmp);
	
	Data s;
	int a=-1;
	int b=-1;
	
		
	if(vf.size()==0){
		printf("Absent\n");
	}else {
		s=vf.back();
		printf("%s ",s.name);
		printf("%s\n",s.id);
		b=s.grade;
	}
	
	if(vm.size()==0){
		printf("Absent\n");
	}else {
		s=vm.front();
		printf("%s ",s.name);
		printf("%s\n",s.id);
		a=s.grade;
	}
	
	if(a!=-1&&b!=-1){
		if(a>b){
			printf("%d",a-b);
		}else{
			printf("%d",b-a);
		}
	}else{
		printf("NA");
	}
}
