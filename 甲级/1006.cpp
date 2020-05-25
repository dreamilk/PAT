#include<stdio.h>
#include<algorithm>

using namespace std;


int n;


struct Person{
	char id[20];
	char time_in[20];
	char time_out[20];
}s[1000];

long convert(char c[20]){
	long time=(c[0]*10+c[1])*3600+(c[3]*10+c[4])*60+c[6]*10+c[7];
	return time;
}

bool cmp1(Person a,Person b){
	long at=convert(a.time_in);
	long bt=convert(b.time_in);
	return at<bt;
}

bool cmp2(Person a,Person b){
	long at=convert(a.time_out);
	long bt=convert(b.time_out);
	return at>bt;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s[i].id);
		scanf("%s",s[i].time_in);
		scanf("%s",s[i].time_out);
	}
	
	sort(s,s+n,cmp1);
	printf("%s ",s[0].id);
	sort(s,s+n,cmp2);
	printf("%s",s[0].id);
	
}
