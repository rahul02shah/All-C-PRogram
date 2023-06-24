#include <iostream>
using namespace std;
class test{
	public:
	void fun(){
		cout<<"Hello From Test"<<endl;
	}
	void fun(int a){
		cout<<"The number is : "<<a<<endl;
	}
	void fun(int id, string name){
		cout<<"Id is : "<<id<<"Name is : "<<name<<endl;
	}
};
int main(){
	test obj;
	int a;
	cout<<"Enter Any Name Or NUmber : ";
	cin>>a;
	obj.fun(a);
}
