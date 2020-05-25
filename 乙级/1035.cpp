#include<stdio.h>
#include<algorithm>

using namespace std;

int n;
int a[100];
int b[100];
int r[100];

bool isEqual(){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;
}


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		r[i]=a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",b+i);
	}
	
	for(int i=1;i<n;i++){
		sort(a,a+i);
		if(isEqual()){
			printf("Insertion Sort\n");
			sort(a,a+i+1);
			for(int j=0;j<n;j++){
				printf("%d",a[j]);
				if(j!=n-1){
					printf(" ");
				}
			}
			return 0;
		}
	}
	
	for(int i=0;i<n;i++){
		a[i]=r[i];
	}
	
	for(int i=1;i<n;i=i*2){
		for(int j=0;j+i<n;j=j+i){
			sort(a+j,a+j+i);
			if(j+i+i>=n){
				sort(a+j+i,a+n-1);
			}
			if(isEqual()){
		    	printf("Merge Sort\n");
			    for(int k=0;k+2*i<n;k=k+2*i){
			    	sort(a+k,a+k+2*i);
			    	if(k+2*i+2*i>=n){
			    		sort(a+k+2*i,a+n-1);
					}
				}
			    
			    for(int o=0;o<n;o++){
				printf("%d",a[o]);
				if(o!=n-1){
					printf(" ");
			      	}
		     	}
			return 0;
		    }
		}
	}
	
	
}
