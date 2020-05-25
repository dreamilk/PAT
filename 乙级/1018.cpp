#include<stdio.h>

int n;

int cmp(char a,char b){
	if(a=='C'&&b=='J'){
		return 1;
	}
	if(a=='C'&&b=='B'){
		return -1;
	}
	if(a=='C'&&b=='C'){
		return 0;
	}
	if(a=='J'&&b=='J'){
		return 0;
	}
	if(a=='J'&&b=='B'){
		return 1;
	}
	if(a=='J'&&b=='C'){
		return -1;
	}
	if(a=='B'&&b=='J'){
		return -1;
	}
	if(a=='B'&&b=='B'){
		return 0;
	}
	if(a=='B'&&b=='C'){
		return 1;
	}
//	printf("false!!!--------\n");
}

int main(){
	scanf("%d",&n);
	int x[3]={0,0,0};
	int y[3]={0,0,0};
	int c=0;
	int d=0;
	int f=0;
	
	for(int i=0;i<n;i++){
		char p,q;
		scanf("%c %c\n",&p,&q);
		if(cmp(p,q)==1){
			c++;
			if(p=='C'){
				x[0]++;
			}
			if(p=='J'){
				x[1]++;
			}
			if(p=='B'){
				x[2]++;
			}
		}
		if(cmp(p,q)==0){
			d++;
		}
		if(cmp(p,q)==-1){
			f++;
			if(q=='C'){
				y[0]++;
			}
			if(q=='J'){
				y[1]++;
			}
			if(q=='B'){
				y[2]++;
			}
		}
		
	}
	
	printf("%d %d %d\n",c,d,f);
	printf("%d %d %d\n",f,d,c);
	
//	printf("%d %d %d\n",x[0],x[1],x[2]);
//	printf("%d %d %d\n",y[0],y[1],y[2]);
		
	
	if(x[0]>x[1]&&x[0]>x[2]){
		printf("C ");
	}
	if(x[1]>x[0]&&x[1]>x[2]){
		printf("J ");
	}
	if(x[2]>x[0]&&x[2]>x[1]){
		printf("B ");
	}
	
	if(x[0]==x[1]&&x[0]>x[2]){
		printf("C ");
	}
	if(x[0]==x[2]&&x[0]>x[1]){
		printf("B ");
	}
	if(x[1]==x[2]&&x[1]>x[0]){
		printf("B ");
	}
	
	//B 
	if(y[0]>y[1]&&y[0]>y[2]){
		printf("C");
	}
	if(y[1]>y[0]&&y[1]>y[2]){
		printf("J");
	}
	if(y[2]>y[0]&&y[2]>y[1]){
		printf("B");
	}
	
	if(y[0]==y[1]&&y[0]>y[2]){
		printf("C");
	}
	if(y[0]==y[2]&&y[0]>y[1]){
		printf("B");
	}
	if(y[1]==y[2]&&y[1]>y[0]){
		printf("B");
	}
	
	
	
	
	
	
} 
