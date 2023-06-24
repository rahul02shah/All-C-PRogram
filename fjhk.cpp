#include <iostream>
using namespace std;
class a{
	protected:
	int id ;
	public:
		void cc(){
			cout<<id<<endl;
		}
};
class b: public a{
	protected:
	string name;
	public:
		void mm(){
			cout<<name;
		}
};
class c: public b{
	public:
	void fun(){
		cout<<"Enter The Id : ";
	cin>>id;
	cout<<"Enter The NAme :";
	cin>>name;
	}
};
int main(){
	c obj;
	obj.fun();
	obj.cc();
	obj.mm();
}
