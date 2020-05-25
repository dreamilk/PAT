#include<stdio.h>

int n;
int a[1001];

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int a5=0;
	bool flag=true;
	int a4_num=0;
	int a2_num=0; 
	
	for(int i=0;i<n;i++){
		if(a[i]%10==0){
			a1=a1+a[i];
		}
		if(a[i]%5==1){
			
			a2_num++;
			if(flag){
				a2=a2+a[i];
				flag=false;
			}else{
				a2=a2-a[i];
				flag=true;
			}
		}
		if(a[i]%5==2){
			a3++;
		}
		if(a[i]%5==3){
			a4=a4+a[i];
			a4_num++;
		}
		if(a[i]%5==4){
			if(a[i]>a5){
				a5=a[i];
			}
		}
	}
	
	if(a1!=0){
		printf("%d ",a1);
	}else{
		printf("N ");
	}
	
	if(a2_num!=0){
		printf("%d ",a2);
	}else{
		printf("N ");
	}
	
	if(a3!=0){
		printf("%d ",a3);
	}else{
		printf("N ");
	}
	
	if(a4_num!=0){
		printf("%.1f ",(double)a4/a4_num);
	}else{
		printf("N ");
	}
	
	if(a5!=0){
		printf("%d",a5);
	}else{
		printf("N");
	}
	
	
}
