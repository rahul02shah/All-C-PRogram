#include <iostream>
using namespace std;
void circumference (int x);
void area(int y);
int main(){
	int a;
	cout<<"Enter a radius : ";
	cin>>a;
	circumference (a);
	area(a);
}
void circumference (int x){
	int m;
	float n=22/7;
	m=2*n*x;
	cout<<"The circumference is : "<<m<<endl;
}
void area(int y){
	int n;
	float k=22/7;
	n=k*y*y;
	cout<<"Area is : "<<n;
}
