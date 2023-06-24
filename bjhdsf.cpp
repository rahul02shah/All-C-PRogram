#include <iostream>
using namespace std;
int main(){
	char a;
	char v = '=';
	int b,c;
	cout<<"Enter Sign For  Calculation : ";
	cin>>a;
	cout<<"Enter Two Number For Calculation : ";
	cin>>b>>c;
	switch (a){
		case '-':
		{
			cout<<"Subtraction is : "<<b<<a<<c<<v<<b-c;
			break;
		}
		case '+':
		{
			cout<<"Addition is : "<<b<<a<<c<<v<<b+c;
			break;
		}
		case '*':
		{
			cout<<"Multiple is : "<<b<<a<<c<<v<<b*c;
			break;
		}
		case '/':
		{
			cout<<"Division is : "<<b<<a<<c<<v<<b/c;
			break;
		}
		default :
		{
			cout<<"case undefined";
		}
	}
}
