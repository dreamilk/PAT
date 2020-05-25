#include<stdio.h>
#include<string.h>

char a[60];
char b[60];
char c[60];
char d[60];

char* day;
int h,m;

void getDay(char x){
	switch (x){
		case 'A':day="MON";break;
		case 'B':day="TUE";break;
		case 'C':day="WED";break;
		case 'D':day="THU";break;
		case 'E':day="FRI";break;
		case 'F':day="SAT";break;
		case 'G':day="SUN";break; 
	}
}

void getTime(){
	int aLen=strlen(a);
	int bLen=strlen(b);
	int cLen=strlen(c);
	int dLen=strlen(d);
	
	int count=0;
	
	for(int i=0;i<aLen&&i<bLen;i++){
		if(a[i]==b[i]){
			if(a[i]>='A'&&a[i]<='G'&&count==0){
				getDay(a[i]);
				count++;
				continue;
			}
			if(count>0){
				if(a[i]>='0'&&a[i]<='9'){
					h=a[i]-'0';
					count++;
				}
				if(a[i]>='A'&&a[i]<='N'){
					h=a[i]-'A'+10;
					count++;
				}
			}
			if(count==2){
				break;
			}
		}
	}
	
	for(int i=0;i<cLen&&i<dLen;i++){
		if(c[i]==d[i]){
			if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')){
				m=i;
				break;
			}
		}
	}
	
	
}

int main(){
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	scanf("%s",d);
	getTime();
	printf("%s %d:%02d",day,h,m);
	
}
