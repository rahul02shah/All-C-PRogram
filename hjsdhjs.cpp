#include <iostream>
using namespace std;
int main(){
	int a[5],sum,b;
	cout<<"Enter Any 5 Number : ";
	for(b=0;b<=4;b++){
		cin>>a[b];
		sum=sum+a[b];
	}
	cout<<"sum is : "<<sum;
	return 0;
}
