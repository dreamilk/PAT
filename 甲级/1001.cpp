#include<stdio.h>
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

long long int a;
long long int b;
string str;


int main(){
	scanf("%lld",&a);
	scanf("%lld",&b);
	long long int c=a+b;
	
	//Êý×Ö ×ª»»³Éstring 
	stringstream sstr;
    sstr << c;
    str = sstr.str();
	
	int n=0;
	if(str[0]=='-'){
		printf("-");
		n=str.size();
		str=str.substr(1,n);
		n=n-1;
		while(n>3){
			str.insert(n-3,",");
			n=n-3;
		}
		
	}else{
		n=str.size();
		while(n>3){
			str.insert(n-3,",");
			n=n-3;
		}
	}
	
	cout<<str;
	
	
	
}
