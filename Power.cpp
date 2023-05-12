#include<iostream>
#include<conio.h>
using namespace std;

double f(double,double);

int main(){
	double a,b;
	cout<<f(a,b);
	
	getch();
	return 0;
}

double f(double,double){
	double a,b,c=1;
	cin>>a>>b;
	if(b>=0){
		for(int i=1;i<=b;i++)
		c*=a;
	}
	else{
		for(int i=-1;i>=b;i--)
		c*=(1/a);
	}
	return c;
}
