#include <iostream>
using namespace std;
void amm(int a,int b){
	int c;
	c=a+b;
	cout<<"sum is "<<c;
}
void amm(float a,float b){
	float c;
	c=a+b;
	cout<<"Sum is "<<c;
}
int main(){
	float x,y;
	cout<<"Enter any Two Number : ";
	cin>>x;
	cin>>y;
	amm(x,y);
}
