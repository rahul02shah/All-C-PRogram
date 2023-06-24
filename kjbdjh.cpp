#include <iostream>
using namespace std;
class parent {
	protected :
		int id;
		string name;
	
};
class child : public parent {
	private :
	string childname;
	public:
	void fun(){
	cout<<"Enter id : ";
	cin>>id;
	cout<<"Your  Name  :";
	cin>>name;
	cout<<"Childname : ";
	cin>>childname;
	}
	void pt(){
		cout<<"Childname is "<<childname;
	}
	void raj(){
		cout<<"id is  : "<<id<<endl;
		cout<<"Name is : "<<name<<endl;
	}
};
int main(){
	int a;
	string b,c;
	child obj;
	
	obj.fun();
	obj.raj();
	obj.pt();
}
