#include <iostream>
using namespace std;
int main(){
	int a=1,b;
	char c='*' ;
	char d='=';
	cout<<"Enter Any Number : ";
	cin>>b;
	while (a<=10) {
		cout<<b<<c<<a<<d<<a*b<<endl;
		a++;
	}
	return 0;
}
