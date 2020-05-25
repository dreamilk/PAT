#include<stdio.h>

struct M{
	int g;
	int s;
	int k;
}a,b,r;

bool cmp(M x,M y){
	if(x.g!=y.g){
		return x.g-y.g>0?true:false;
	}
	if(x.s!=y.s){
		return x.s-y.s>0?true:false;
	}
	if(x.k!=y.k){
		return x.k-y.k>0?true:false;
	}
	
	return true;
}

void getM(M x,M y){
	if(x.k>=y.k){
		r.k=x.k-y.k;
	}else{
		x.s=x.s-1;
		r.k=x.k-y.k+29;
	}
	
	if(x.s>=y.s){
		r.s=x.s-y.s;
	}else{
		x.g=x.g-1;
		r.s=x.s-y.s+17;
	}
	r.g=x.g-y.g;
}

int main(){
	char str[100];
	scanf("%s",str);
	sscanf(str,"%d.%d.%d",&a.g,&a.s,&a.k);
	scanf("%s",str);
	sscanf(str,"%d.%d.%d",&b.g,&b.s,&b.k);
	
	if(cmp(b,a)){
		getM(b,a);
		printf("%d.%d.%d",r.g,r.s,r.k);
	}else{
		getM(a,b);
		printf("-%d.%d.%d",r.g,r.s,r.k);
	}
		
}
