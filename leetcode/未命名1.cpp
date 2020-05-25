#include<cstdio>

int fun(int a,int b){
	return !b?a:fun(b,a%b);
}

int main(){
	printf("%d",fun(64,32));
}
