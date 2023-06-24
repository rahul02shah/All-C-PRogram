#include <iostream>
using namespace std;
class test{
	protected:
	int id;
};
class testy{
	protected:
	string name ;
};
class myclass:public test,public testy{
	public: 
	void fun(){
		cout<<"Enter Your Id : ";
		cin>>id;
		cout<<"Enter The name :";
		cin>>name;
		cout<<"Name Is "<<name<<endl;
		cout<<"Id Is : "<<id<<endl;
	}
};
int main(){
	myclass obj;
	obj.fun();
	return 0;
}
