#include <iostream>
using namespace std;
void sum(int x,int y);
int main(){
	int a,b;
	cout<<"Enter AnY Two number For sum : ";
	cin>>a>>b;
	sum(a,b);
	return 0;
}
void sum(int x,int y){
	int sum = x+y;
	cout<<"sum is : "<<sum;
}
