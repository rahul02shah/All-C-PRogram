#include <iostream>
using namespace std;
int main(){
	int a=1,b;
	char c='*' ;
	char d='=';
	cout<<"Enter Any Number : ";
	cin>>b;
	do{
		cout<<b<<c<<a<<d<<b*a<<endl;
		a++;
	}
	while (a<=10);
	return 0;
}
