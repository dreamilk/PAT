#include<cstdio>
#include<vector>

using namespace std;

int main(){
	int a=1<<31;
	int b=-((1<<31)+1); 
	printf("%d\n%d\n",a,b);
	
	//vector สนำร 
	vector<int> t{1,2,3,4,5,6,7};
	vector<int> n(t);
	for(int i=0;i<n.size();i++){
		printf("%d  ",n[i]);
	}
}
