#include <iostream>
using namespace std;
int main(){
	int a,b,m=0;
	cout<<"Enter any number : ";
	cin>>a;
	for(b=1;b<=a;b++){
		if(a%b==0){
			m++;
		}
	}
	if (m==2){
		cout<<"%d is prime"<<a;
	}
	return 0;
}
