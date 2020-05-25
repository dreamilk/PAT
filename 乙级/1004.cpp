#include<stdio.h>
#include<algorithm>
using namespace std;
struct Student{
	char* name[100];
	char* id[100];
	int score;
}student[1000];

bool cmp(Student a,Student b){
	if(a.score>=b.score){
		return true;
	}
	return false;
}

int n;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",student[i].name);
		scanf("%s",student[i].id);
		scanf("%d",&student[i].score);
	}
	sort(student,student+n,cmp);
	
	printf("%s %s\n",student[0].name,student[0].id);
	printf("%s %s",student[n-1].name,student[n-1].id);
	
	
}
