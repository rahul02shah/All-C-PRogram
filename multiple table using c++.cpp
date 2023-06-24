#include <iostream>
using namespace std;
int main(){
	int a,b;
	char c='*' ;
	char d='=';
	cout<<"Enter Any Number For Table : ";
	cin>>b;
	for (a=1;a<=10;a++){
		cout<<b<<c<<a<<d<<b*a<<endl;
	}
	return 0;
}
