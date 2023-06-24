#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,total;
	float per;
	cout<<"Enter Marks Of Math :"<<endl;
	cin>>a;
	cout<<"Enter Marks Of Math :"<<endl;
	cin>>b;
	cout<<"Enter Marks Of Math :"<<endl;
	cin>>c;
	cout<<"Enter Marks Of Math :"<<endl;
	cin>>d;
	cout<<"Enter Marks Of Math :";
	cin>>e;
	total = a+b+c+d+e;
	cout<<"Total is : "<<total<<endl;
	per = (total/5)*100;
	cout<<"Percentage is : "<<per<<endl;
	return 0;
}
