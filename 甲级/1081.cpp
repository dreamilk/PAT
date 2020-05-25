#include<cstdio>

int n;

struct Rat{
	int up;
	int down;
};

int fun(int a,int b){
	return b==0?a:fun(a,a%b);
}

Rat simple(Rat a){
	int temp=fun(a.up,a.down);
	Rat result;
	result.down=a.down/temp;
	result.up=a.up/temp;
	return result;
}

Rat add(Rat a, Rat b){
	Rat r;
	r.down=a.down*b.down;
	r.up=a.up*b.down+a.down*b.up;
	return simple(r);
}

int main(){
	scanf("%d",&n);
	Rat result;
	result.up=0;
	result.down=1;
	for(int i=0;i<n;i++){
		
	}
}
